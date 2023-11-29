void __fastcall QuestPhaseDetailEntity___ctor(QuestPhaseDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F95F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F95F9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseDetailEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_40F95F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_40F95F8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  bool IsNullOrEmpty; // w0
  bool v7; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *bannerSp; // x21
  struct System_Int32_array *setSize; // x8
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *offset; // x8
  UnityEngine_GameObject_o *v17; // x21
  struct System_Int32_array *v18; // x8
  struct System_Int32_array *v19; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o v24; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7906 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, sprite);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7906 = 1;
  }
  *(_QWORD *)&v24.fields.r = 0LL;
  *(_QWORD *)&v24.fields.b = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
    return 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.bannerSp, 0LL);
  if ( !sprite )
    goto LABEL_34;
  v7 = IsNullOrEmpty;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  if ( v7 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    return 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  bannerSp = this->fields.bannerSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(sprite, bannerSp, 0LL);
  setSize = this->fields.setSize;
  if ( setSize && (int)setSize->max_length >= 2 )
  {
    UIWidget__set_width((UIWidget_o *)sprite, setSize->m_Items[1], 0LL);
    v15 = this->fields.setSize;
    if ( !v15 )
      goto LABEL_34;
    if ( v15->max_length <= 1 )
      goto LABEL_35;
    UIWidget__set_height((UIWidget_o *)sprite, v15->m_Items[2], 0LL);
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
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
    v18 = this->fields.offset;
    if ( v18 )
    {
      if ( !v18->max_length )
        goto LABEL_35;
      GameObjectExtensions__SetLocalPositionX(v12, (float)v18->m_Items[1], 0LL);
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      v19 = this->fields.offset;
      if ( v19 )
      {
        if ( v19->max_length > 1 )
        {
          GameObjectExtensions__SetLocalPositionY(v12, (float)v19->m_Items[2], 0LL);
          goto LABEL_29;
        }
LABEL_35:
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
    }
LABEL_34:
    sub_B170D4();
  }
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(v17, zero, 0LL);
LABEL_29:
  if ( System_String__IsNullOrEmpty(this->fields.imgColor, 0LL) )
  {
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    UnityEngine_ColorUtility__TryParseHtmlString(this->fields.imgColor, &v24, 0LL);
    g = v24.fields.g;
    r = v24.fields.r;
    b = v24.fields.b;
    a = v24.fields.a;
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
  UnityEngine_GameObject_o *v7; // x0
  bool v8; // w20
  struct System_Int32_array *offset; // x8
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *v15; // x8
  int fontSize; // w1
  struct System_String_array *gradation; // x8
  struct System_String_array *v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Color_o v21; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F7907 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40F7907 = 1;
  }
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v21.fields.b = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&v21.fields.r = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
    return 0;
  if ( !System_String__IsNullOrEmpty(this->fields.textString, 0LL) )
  {
    offset = this->fields.offset;
    if ( offset && (int)offset->max_length >= 2 )
    {
      if ( !label )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      v14 = this->fields.offset;
      if ( !v14 )
        goto LABEL_33;
      if ( !v14->max_length )
        goto LABEL_34;
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)v14->m_Items[1], 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      v15 = this->fields.offset;
      if ( !v15 )
        goto LABEL_33;
      if ( v15->max_length <= 1 )
        goto LABEL_34;
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)v15->m_Items[2], 0LL);
    }
    else
    {
      if ( !label )
        goto LABEL_33;
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(v10, zero, 0LL);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               gradation->m_Items[0],
                                               &color,
                                               0LL);
    v18 = this->fields.gradation;
    if ( !v18 )
      goto LABEL_33;
    if ( v18->max_length > 1 )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v18->m_Items[1], &v21, 0LL);
      UILabel__set_gradientTop(label, color, 0LL);
      UILabel__set_gradientBottom(label, v21, 0LL);
      UILabel__set_applyGradient(label, 1, 0LL);
LABEL_30:
      UILabel__set_text(label, this->fields.textString, 0LL);
      v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
      if ( v19 )
      {
        v8 = 1;
        UnityEngine_GameObject__SetActive(v19, 1, 0LL);
        UILabel__SetCondensedScale_40440812(label, maxWidth, 0LL);
        return v8;
      }
LABEL_33:
      sub_B170D4();
    }
LABEL_34:
    sub_B17100(gameObject, v12, v13);
    sub_B170A0();
  }
  if ( !label )
    goto LABEL_33;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( !v7 )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(v7, 0, 0LL);
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
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *image; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FA30C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FA30C = 1;
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
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  return 0;
}


bool __fastcall QuestPhaseDetailEntity_BoardList__SetText(
        QuestPhaseDetailEntity_BoardList_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *text; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FA30B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FA30B = 1;
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
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  return 0;
}