void QuestPhaseDetailEntity___ctor(QuestPhaseDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970EFA & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970EFA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseDetailEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_5970EF9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970EF9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestPhaseDetailEntity__CreatePrimaryKey(QuestPhaseDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseDetailEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


bool QuestPhaseDetailEntity__HasFlag(QuestPhaseDetailEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


void QuestPhaseDetailEntity_BoardInfo___ctor(QuestPhaseDetailEntity_BoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(
        QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
        QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v8; // x1
  System_String_o *bannerSp; // x21
  struct System_Int32_array *setSize; // x8
  struct System_Int32_array *v11; // x8
  struct System_Int32_array *offset; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *v15; // x8
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5970EFC & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970EFC = 1;
  }
  *(_QWORD *)&v19.fields.r = 0;
  *(_QWORD *)&v19.fields.b = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0) )
    return 0;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(this->fields.bannerSp, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( sprite )
    {
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
      if ( IsNullOrEmpty )
      {
        UnityEngine_GameObject__SetActive(IsNullOrEmpty, 0, 0);
        return 0;
      }
    }
LABEL_36:
    sub_2213CDC(IsNullOrEmpty, v6);
  }
  if ( !sprite )
    goto LABEL_36;
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, 1, 0);
  bannerSp = this->fields.bannerSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
  AtlasManager__SetBanner(sprite, bannerSp, 0);
  setSize = this->fields.setSize;
  if ( setSize && SLODWORD(setSize->max_length) >= 2 )
  {
    UIWidget__set_width((UIWidget_o *)sprite, setSize->m_Items[0], 0);
    v11 = this->fields.setSize;
    if ( !v11 )
      goto LABEL_36;
    if ( (v11->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_37;
    UIWidget__set_height((UIWidget_o *)sprite, v11->m_Items[1], 0);
  }
  else
  {
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      sprite,
      sprite->klass->vtable._33_MakePixelPerfect.method);
  }
  offset = this->fields.offset;
  if ( !offset || SLODWORD(offset->max_length) < 2 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    goto LABEL_31;
  }
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
  v14 = this->fields.offset;
  if ( !v14 )
    goto LABEL_36;
  if ( !LODWORD(v14->max_length) )
    goto LABEL_37;
  GameObjectExtensions__SetLocalPositionX(IsNullOrEmpty, (float)v14->m_Items[0], 0);
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
  v15 = this->fields.offset;
  if ( !v15 )
    goto LABEL_36;
  if ( (v15->max_length & 0xFFFFFFFE) == 0 )
LABEL_37:
    sub_2213CE4(IsNullOrEmpty);
  GameObjectExtensions__SetLocalPositionY(IsNullOrEmpty, (float)v15->m_Items[1], 0);
LABEL_31:
  if ( System_String__IsNullOrEmpty(this->fields.imgColor, 0) )
  {
    v20.fields.r = 1.0;
    v20.fields.g = 1.0;
    v20.fields.b = 1.0;
    v20.fields.a = 1.0;
  }
  else
  {
    UnityEngine_ColorUtility__TryParseHtmlString(this->fields.imgColor, &v19, 0);
    v20 = v19;
  }
  UIWidget__set_color((UIWidget_o *)sprite, v20, 0);
  return 1;
}


void QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(
        QuestPhaseDetailEntity_BoardInfo_TextInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
        QuestPhaseDetailEntity_BoardInfo_TextInfo_o *this,
        UILabel_o *label,
        float maxWidth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  bool v9; // w20
  struct System_Int32_array *offset; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  struct System_Int32_array *v12; // x8
  struct System_Int32_array *v13; // x8
  int fontSize; // w1
  struct System_String_array *gradation; // x8
  struct System_String_array *v16; // x8
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5970EFB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970EFB = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v18.fields.r = 0;
  *(_QWORD *)&v18.fields.b = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0) )
    return 0;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(this->fields.textString, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    offset = this->fields.offset;
    if ( offset && SLODWORD(offset->max_length) >= 2 )
    {
      if ( !label )
        goto LABEL_34;
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
      v12 = this->fields.offset;
      if ( !v12 )
        goto LABEL_34;
      if ( !LODWORD(v12->max_length) )
        goto LABEL_35;
      GameObjectExtensions__SetLocalPositionX(IsNullOrEmpty, (float)v12->m_Items[0], 0);
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
      v13 = this->fields.offset;
      if ( !v13 )
        goto LABEL_34;
      if ( (v13->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_35;
      GameObjectExtensions__SetLocalPositionY(IsNullOrEmpty, (float)v13->m_Items[1], 0);
    }
    else
    {
      if ( !label )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
    fontSize = this->fields.fontSize;
    if ( fontSize >= 1 )
      UILabel__set_fontSize(label, fontSize, 0);
    gradation = this->fields.gradation;
    if ( !gradation || SLODWORD(gradation->max_length) < 2 )
    {
      UILabel__set_applyGradient(label, 0, 0);
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)label, v20, 0);
      goto LABEL_31;
    }
    IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                  gradation->m_Items[0],
                                                  &color,
                                                  0);
    v16 = this->fields.gradation;
    if ( !v16 )
      goto LABEL_34;
    if ( (v16->max_length & 0xFFFFFFFE) != 0 )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v16->m_Items[1], &v18, 0);
      UILabel__set_gradientTop(label, color, 0);
      UILabel__set_gradientBottom(label, v18, 0);
      UILabel__set_applyGradient(label, 1, 0);
LABEL_31:
      UILabel__set_text(label, this->fields.textString, 0);
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
      if ( IsNullOrEmpty )
      {
        v9 = 1;
        UnityEngine_GameObject__SetActive(IsNullOrEmpty, 1, 0);
        UILabel__SetCondensedScale_56591096(label, maxWidth, 0.0, 0);
        return v9;
      }
LABEL_34:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
LABEL_35:
    sub_2213CE4(IsNullOrEmpty);
  }
  if ( !label )
    goto LABEL_34;
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, 0, 0);
  return 0;
}


void QuestPhaseDetailEntity_BoardList___ctor(QuestPhaseDetailEntity_BoardList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}