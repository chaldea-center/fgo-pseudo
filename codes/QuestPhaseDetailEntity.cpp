void QuestPhaseDetailEntity___ctor(QuestPhaseDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43609 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43609 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseDetailEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4C43608 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C43608 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_30E5DE0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  char v6; // w21
  System_String_o *bannerSp; // x21
  struct System_Int32_array *setSize; // x8
  struct System_Int32_array *v10; // x8
  struct System_Int32_array *offset; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  struct System_Int32_array *v13; // x8
  struct System_Int32_array *v14; // x8
  UnityEngine_Color_o v15; // kr00_16
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4C4360D & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4360D = 1;
  }
  *(_QWORD *)&v16.fields.r = 0;
  *(_QWORD *)&v16.fields.b = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0) )
    return 0;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(this->fields.bannerSp, 0);
  if ( !sprite )
    goto LABEL_34;
  v6 = (char)IsNullOrEmpty;
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_34;
  if ( (v6 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(IsNullOrEmpty, 0, 0);
    return 0;
  }
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, 1, 0);
  bannerSp = this->fields.bannerSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(sprite, bannerSp, 0);
  setSize = this->fields.setSize;
  if ( setSize && SLODWORD(setSize->max_length) >= 2 )
  {
    UIWidget__set_width((UIWidget_o *)sprite, setSize->m_Items[0], 0);
    v10 = this->fields.setSize;
    if ( !v10 )
      goto LABEL_34;
    if ( LODWORD(v10->max_length) <= 1 )
      goto LABEL_35;
    UIWidget__set_height((UIWidget_o *)sprite, v10->m_Items[1], 0);
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
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    goto LABEL_29;
  }
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
  v13 = this->fields.offset;
  if ( !v13 )
    goto LABEL_34;
  if ( !LODWORD(v13->max_length) )
    goto LABEL_35;
  GameObjectExtensions__SetLocalPositionX(IsNullOrEmpty, (float)v13->m_Items[0], 0);
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0);
  v14 = this->fields.offset;
  if ( !v14 )
LABEL_34:
    sub_1C372B4(IsNullOrEmpty);
  if ( LODWORD(v14->max_length) <= 1 )
LABEL_35:
    sub_1C372BC(IsNullOrEmpty);
  GameObjectExtensions__SetLocalPositionY(IsNullOrEmpty, (float)v14->m_Items[1], 0);
LABEL_29:
  if ( System_String__IsNullOrEmpty(this->fields.imgColor, 0) )
  {
    *(_QWORD *)&v15.fields.r = __PAIR64__(1.0, 1.0);
    *(_QWORD *)&v15.fields.b = __PAIR64__(1.0, 1.0);
  }
  else
  {
    UnityEngine_ColorUtility__TryParseHtmlString(this->fields.imgColor, &v16, 0);
    v15 = v16;
  }
  UIWidget__set_color((UIWidget_o *)sprite, v15, 0);
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
  bool v8; // w20
  struct System_Int32_array *offset; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  struct System_Int32_array *v11; // x8
  struct System_Int32_array *v12; // x8
  int fontSize; // w1
  struct System_String_array *gradation; // x8
  struct System_String_array *v15; // x8
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4360C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4360C = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v17.fields.r = 0;
  *(_QWORD *)&v17.fields.b = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v11 = this->fields.offset;
      if ( !v11 )
        goto LABEL_34;
      if ( !LODWORD(v11->max_length) )
        goto LABEL_35;
      GameObjectExtensions__SetLocalPositionX(IsNullOrEmpty, (float)v11->m_Items[0], 0);
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
      v12 = this->fields.offset;
      if ( !v12 )
        goto LABEL_34;
      if ( LODWORD(v12->max_length) <= 1 )
        goto LABEL_35;
      GameObjectExtensions__SetLocalPositionY(IsNullOrEmpty, (float)v12->m_Items[1], 0);
    }
    else
    {
      if ( !label )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
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
      v19.fields.r = 1.0;
      v19.fields.g = 1.0;
      v19.fields.b = 1.0;
      v19.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)label, v19, 0);
      goto LABEL_31;
    }
    IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                  gradation->m_Items[0],
                                                  &color,
                                                  0);
    v15 = this->fields.gradation;
    if ( !v15 )
      goto LABEL_34;
    if ( LODWORD(v15->max_length) > 1 )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v15->m_Items[1], &v17, 0);
      UILabel__set_gradientTop(label, color, 0);
      UILabel__set_gradientBottom(label, v17, 0);
      UILabel__set_applyGradient(label, 1, 0);
LABEL_31:
      UILabel__set_text(label, this->fields.textString, 0);
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
      if ( IsNullOrEmpty )
      {
        v8 = 1;
        UnityEngine_GameObject__SetActive(IsNullOrEmpty, 1, 0);
        UILabel__SetCondensedScale_49525996(label, maxWidth, 0.0, 0);
        return v8;
      }
LABEL_34:
      sub_1C372B4(IsNullOrEmpty);
    }
LABEL_35:
    sub_1C372BC(IsNullOrEmpty);
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


bool QuestPhaseDetailEntity_BoardList__SetImage(
        QuestPhaseDetailEntity_BoardList_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *image; // x0

  if ( (byte_4C4360B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4360B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0) )
  {
    image = this->fields.image;
    if ( image )
      return QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(image, sprite, v5);
    if ( !sprite
      || (image = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)sprite,
                                                                    0)) == 0 )
    {
      sub_1C372B4(image);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)image, 0, 0);
  }
  return 0;
}


bool QuestPhaseDetailEntity_BoardList__SetText(
        QuestPhaseDetailEntity_BoardList_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *text; // x0

  if ( (byte_4C4360A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4360A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0) )
  {
    text = this->fields.text;
    if ( text )
      return QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(text, label, 1000.0, v5);
    if ( !label
      || (text = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)label,
                                                                  0)) == 0 )
    {
      sub_1C372B4(text);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)text, 0, 0);
  }
  return 0;
}