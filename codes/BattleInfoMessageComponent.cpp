void BattleInfoMessageComponent___ctor(BattleInfoMessageComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


UnityEngine_Transform_o *BattleInfoMessageComponent__getTargetTr(
        BattleInfoMessageComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *objTarget; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C3ADE5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADE5 = 1;
  }
  objTarget = (UnityEngine_Object_o *)this->fields.objTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(objTarget, 0, 0) )
    return this->fields.objTarget;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  return UnityEngine_GameObject__get_transform(gameObject, 0);
}


void BattleInfoMessageComponent__setCommandObject(
        BattleInfoMessageComponent_o *this,
        UnityEngine_GameObject_o *command,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleCommand; // x23
  BattleCommandComponent_o *Component_object; // x0
  UnityEngine_Object_o *v9; // x23
  BattleCommandComponent_o *v10; // x23
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleCommandComponent_o *v14; // x20
  BattleServantData_o *v15; // x1
  struct BattleCommandData_o *data; // x19

  if ( (byte_4C3ADE6 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADE6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)command, 0, 0) )
  {
    battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(battleCommand, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v9 = (UnityEngine_Object_o *)this->fields.battleCommand;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v9, 0);
    }
    if ( !command )
      goto LABEL_21;
    Component_object = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     command,
                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_object )
      goto LABEL_21;
    v10 = Component_object;
    BattleCommandComponent__SetCommandEffectActive(Component_object, 3, 0, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, command, this->fields.commandTarget, 0, 0);
    this->fields.battleCommand = Object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleCommand, (int32_t)Object, v12, v13);
    Component_object = (BattleCommandComponent_o *)this->fields.battleCommand;
    if ( !Component_object )
      goto LABEL_21;
    Component_object = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)Component_object,
                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_object )
      goto LABEL_21;
    v14 = Component_object;
    BattleCommandComponent__setAttackCommandData(Component_object, v10, 0);
    BattleCommandComponent__resetAddObject(v14, 0);
    v15 = svtData ? svtData : 0LL;
    BattleCommandComponent__updateClassMag(v14, v15, 0);
    data = v10->fields.data;
    *(_WORD *)&v14->fields.isCodeTextureView = 256;
    if ( !data )
LABEL_21:
      sub_1C32E7C(Component_object);
    BattleCommandComponent__SetCommandCodeView_46324104(v14, data->fields.commandCodeId, 0);
    BattleCommandComponent__SetCommandAssistView(v14, data->fields.commandAssistId, 0);
  }
}


void BattleInfoMessageComponent__setItemSprite(
        BattleInfoMessageComponent_o *this,
        int32_t imageId,
        bool useSelfAtlas,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemSprite; // x22
  System_String_o *v8; // x0
  struct UISprite_o *v9; // x22
  UnityEngine_Object_o *mAtlas; // x20
  struct UISprite_o *v11; // x8
  UIAtlas_o *v12; // x20
  UISprite_o *v13; // x19
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = imageId;
  if ( (byte_4C3ADE7 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADE7 = 1;
  }
  itemSprite = (UnityEngine_Object_o *)this->fields.itemSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (System_String_o *)UnityEngine_Object__op_Inequality(itemSprite, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v9 = this->fields.itemSprite;
    if ( useSelfAtlas )
    {
      if ( !v9 )
        goto LABEL_20;
      mAtlas = (UnityEngine_Object_o *)v9->fields.mAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (System_String_o *)UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        v11 = this->fields.itemSprite;
        if ( v11 )
        {
          v12 = v11->fields.mAtlas;
          v8 = System_Int32__ToString((int32_t)&v14, 0);
          if ( v12 )
          {
            if ( !UIAtlas__GetSprite(v12, v8, 0) )
              return;
            v13 = this->fields.itemSprite;
            v8 = System_Int32__ToString((int32_t)&v14, 0);
            if ( v13 )
            {
              UISprite__set_spriteName(v13, v8, 0);
              return;
            }
          }
        }
LABEL_20:
        sub_1C32E7C(v8);
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v9, imageId, 0);
    }
  }
}


void BattleInfoMessageComponent__setSkillText(
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
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  v10 = skillLevel;
  if ( (byte_4C3ADE4 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (BattleInfoMessageComponent_o *)sub_1C32C20(&StringLiteral_2882/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_4C3ADE4 = 1;
  }
  textLabel = v5->fields.textLabel;
  if ( !textLabel )
    goto LABEL_9;
  if ( !LODWORD(textLabel->max_length) )
    sub_1C32E84(this);
  v7 = textLabel->m_Items[0];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_SKILL_NAME_LEVEL"*/, 0);
  v9 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0);
  this = (BattleInfoMessageComponent_o *)System_String__Format_63559836(v8, (Il2CppObject *)str, v9, 0);
  if ( !v7 )
LABEL_9:
    sub_1C32E7C(this);
  UILabel__set_text(v7, (System_String_o *)this, 0);
}


void BattleInfoMessageComponent__setText(
        BattleInfoMessageComponent_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  struct UILabel_array *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_5;
  if ( !LODWORD(textLabel->max_length) )
    sub_1C32E84(this);
  this = (BattleInfoMessageComponent_o *)textLabel->m_Items[0];
  if ( !this )
LABEL_5:
    sub_1C32E7C(this);
  UILabel__set_text((UILabel_o *)this, str, 0);
}


void BattleInfoMessageComponent__setText_47151388(
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
  if ( (byte_4C3ADE3 & 1) == 0 )
  {
    this = (BattleInfoMessageComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADE3 = 1;
  }
  textLabel = v6->fields.textLabel;
  if ( !textLabel )
    goto LABEL_16;
  if ( !LODWORD(textLabel->max_length) )
    goto LABEL_17;
  this = (BattleInfoMessageComponent_o *)textLabel->m_Items[0];
  if ( !this )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)this, str, 0);
  v8 = v6->fields.textLabel;
  if ( !v8 )
    goto LABEL_16;
  if ( LODWORD(v8->max_length) <= 1 )
LABEL_17:
    sub_1C32E84(this);
  v9 = (UnityEngine_Object_o *)v8->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInfoMessageComponent_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v6->fields.textLabel;
    if ( !v10 )
      goto LABEL_16;
    if ( LODWORD(v10->max_length) > 1 )
    {
      this = (BattleInfoMessageComponent_o *)v10->m_Items[1];
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, str2, 0);
        return;
      }
LABEL_16:
      sub_1C32E7C(this);
    }
    goto LABEL_17;
  }
}