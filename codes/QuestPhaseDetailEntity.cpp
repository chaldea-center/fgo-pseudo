void __fastcall QuestPhaseDetailEntity___ctor(QuestPhaseDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186EEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186EEB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseDetailEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4186EEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4186EEA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestPhaseDetailEntity__CreatePrimaryKey(
        QuestPhaseDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseDetailEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


bool __fastcall QuestPhaseDetailEntity__HasFlag(QuestPhaseDetailEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


void __fastcall QuestPhaseDetailEntity_BoardInfo___ctor(
        QuestPhaseDetailEntity_BoardInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(
        QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
        QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  char v8; // w21
  System_String_o *bannerSp; // x21
  struct System_Int32_array *setSize; // x8
  struct System_Int32_array *v12; // x8
  struct System_Int32_array *offset; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *v16; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v21; // x0
  UnityEngine_Color_o v22; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41855CC & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, sprite);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41855CC = 1;
  }
  *(_QWORD *)&v22.fields.r = 0LL;
  *(_QWORD *)&v22.fields.b = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
    return 0;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(this->fields.bannerSp, 0LL);
  if ( !sprite )
    goto LABEL_34;
  v8 = (char)IsNullOrEmpty;
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_34;
  if ( (v8 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(IsNullOrEmpty, 0, 0LL);
    return 0;
  }
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, 1, 0LL);
  bannerSp = this->fields.bannerSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(sprite, bannerSp, 0LL);
  setSize = this->fields.setSize;
  if ( setSize && (int)setSize->max_length >= 2 )
  {
    UIWidget__set_width((UIWidget_o *)sprite, setSize->m_Items[1], 0LL);
    v12 = this->fields.setSize;
    if ( !v12 )
      goto LABEL_34;
    if ( v12->max_length <= 1 )
      goto LABEL_35;
    UIWidget__set_height((UIWidget_o *)sprite, v12->m_Items[2], 0LL);
  }
  else
  {
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
      sprite,
      sprite->klass->vtable._34_get_minWidth.methodPtr);
  }
  offset = this->fields.offset;
  if ( offset && (int)offset->max_length >= 2 )
  {
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
    v15 = this->fields.offset;
    if ( v15 )
    {
      if ( !v15->max_length )
        goto LABEL_35;
      GameObjectExtensions__SetLocalPositionX(IsNullOrEmpty, (float)v15->m_Items[1], 0LL);
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      v16 = this->fields.offset;
      if ( v16 )
      {
        if ( v16->max_length > 1 )
        {
          GameObjectExtensions__SetLocalPositionY(IsNullOrEmpty, (float)v16->m_Items[2], 0LL);
          goto LABEL_29;
        }
LABEL_35:
        v21 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v21, 0LL);
      }
    }
LABEL_34:
    sub_B2C434(IsNullOrEmpty, v7);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, zero, 0LL);
LABEL_29:
  if ( System_String__IsNullOrEmpty(this->fields.imgColor, 0LL) )
  {
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    UnityEngine_ColorUtility__TryParseHtmlString(this->fields.imgColor, &v22, 0LL);
    g = v22.fields.g;
    r = v22.fields.r;
    b = v22.fields.b;
    a = v22.fields.a;
  }
  UIWidget__set_color((UIWidget_o *)sprite, *(UnityEngine_Color_o *)&r, 0LL);
  return 1;
}


void __fastcall QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(
        QuestPhaseDetailEntity_BoardInfo_TextInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
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
  __int64 v18; // x0
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41855CD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_41855CD = 1;
  }
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v19.fields.b = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&v19.fields.r = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
    return 0;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(this->fields.textString, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    offset = this->fields.offset;
    if ( offset && (int)offset->max_length >= 2 )
    {
      if ( !label )
        goto LABEL_33;
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      v12 = this->fields.offset;
      if ( !v12 )
        goto LABEL_33;
      if ( !v12->max_length )
        goto LABEL_34;
      GameObjectExtensions__SetLocalPositionX(IsNullOrEmpty, (float)v12->m_Items[1], 0LL);
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      v13 = this->fields.offset;
      if ( !v13 )
        goto LABEL_33;
      if ( v13->max_length <= 1 )
        goto LABEL_34;
      GameObjectExtensions__SetLocalPositionY(IsNullOrEmpty, (float)v13->m_Items[2], 0LL);
    }
    else
    {
      if ( !label )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(gameObject, zero, 0LL);
    }
    fontSize = this->fields.fontSize;
    if ( fontSize >= 1 )
      UILabel__set_fontSize(label, fontSize, 0LL);
    gradation = this->fields.gradation;
    if ( !gradation || (int)gradation->max_length < 2 )
    {
      UILabel__set_applyGradient(label, 0, 0LL);
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color((UIWidget_o *)label, white, 0LL);
      goto LABEL_30;
    }
    IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                  gradation->m_Items[0],
                                                  &color,
                                                  0LL);
    v16 = this->fields.gradation;
    if ( !v16 )
      goto LABEL_33;
    if ( v16->max_length > 1 )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v16->m_Items[1], &v19, 0LL);
      UILabel__set_gradientTop(label, color, 0LL);
      UILabel__set_gradientBottom(label, v19, 0LL);
      UILabel__set_applyGradient(label, 1, 0LL);
LABEL_30:
      UILabel__set_text(label, this->fields.textString, 0LL);
      IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      if ( IsNullOrEmpty )
      {
        v9 = 1;
        UnityEngine_GameObject__SetActive(IsNullOrEmpty, 1, 0LL);
        UILabel__SetCondensedScale_41673556(label, maxWidth, 0LL);
        return v9;
      }
LABEL_33:
      sub_B2C434(IsNullOrEmpty, v8);
    }
LABEL_34:
    v18 = sub_B2C460(IsNullOrEmpty);
    sub_B2C400(v18, 0LL);
  }
  if ( !label )
    goto LABEL_33;
  IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, 0, 0LL);
  return 0;
}


void __fastcall QuestPhaseDetailEntity_BoardList___ctor(
        QuestPhaseDetailEntity_BoardList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseDetailEntity_BoardList__SetImage(
        QuestPhaseDetailEntity_BoardList_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *image; // x0

  if ( (byte_4185607 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_4185607 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    image = this->fields.image;
    if ( image )
      return QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(image, sprite, 0LL);
    if ( !sprite
      || (image = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)sprite,
                                                                    0LL)) == 0LL )
    {
      sub_B2C434(image, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)image, 0, 0LL);
  }
  return 0;
}


bool __fastcall QuestPhaseDetailEntity_BoardList__SetText(
        QuestPhaseDetailEntity_BoardList_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  __int64 v5; // x1
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *text; // x0

  if ( (byte_4185606 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_4185606 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    text = this->fields.text;
    if ( text )
      return QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(text, label, 1000.0, 0LL);
    if ( !label
      || (text = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)label,
                                                                  0LL)) == 0LL )
    {
      sub_B2C434(text, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)text, 0, 0LL);
  }
  return 0;
}