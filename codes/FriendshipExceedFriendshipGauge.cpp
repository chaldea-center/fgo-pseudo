void __fastcall FriendshipExceedFriendshipGauge___ctor(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  this->fields.DISABLE_COLOR = (struct UnityEngine_Color_o)xmmword_BDE520;
  this->fields.EXCEEDED_COLOR = (struct UnityEngine_Color_o)xmmword_BDF050;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UIFont_o *__fastcall FriendshipExceedFriendshipGauge__GetFont(
        FriendshipExceedFriendshipGauge_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *object; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B05D93 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIFont___, path);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    byte_4B05D93 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             path,
             (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( !v7 )
    return 0LL;
  if ( !object )
    sub_1BC3264(v7, v8);
  return (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)object,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
}


void __fastcall FriendshipExceedFriendshipGauge__InitUISpriteAtlas(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *exceededIconUISprite; // x20

  if ( (byte_4B05D92 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_20144/*"img_bondsgage_11"*/, v3);
    byte_4B05D92 = 1;
  }
  if ( !this->fields.isInitUISpriteAtlas )
  {
    exceededIconUISprite = this->fields.exceededIconUISprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBondAtlasImage(exceededIconUISprite, (System_String_o *)StringLiteral_20144/*"img_bondsgage_11"*/, 0LL);
    this->fields.isInitUISpriteAtlas = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedFriendshipGauge__Set(
        FriendshipExceedFriendshipGauge_o *this,
        int32_t level,
        int32_t max,
        float fraction,
        int32_t type,
        bool isSpecialEffect,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  __int64 v14; // x1
  UnityEngine_GameObject_o *normalRoot; // x0
  FriendshipExceedFriendshipGauge_o *v16; // x0
  const MethodInfo *v17; // x4
  UISlider_array *exceededGaugeSliderList; // x1
  int v19; // w2
  int v20; // w3

  if ( (byte_4B05D90 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, *(_QWORD *)&level);
    byte_4B05D90 = 1;
  }
  FriendshipExceedFriendshipGauge__InitUISpriteAtlas(this, *(const MethodInfo **)&level);
  FriendshipExceedFriendshipGauge__SetLabel(this, level, max, type, isSpecialEffect, v13);
  normalRoot = this->fields.normalRoot;
  if ( !normalRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(normalRoot, max < 11, 0LL);
  normalRoot = this->fields.exceededRoot;
  if ( !normalRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(normalRoot, max > 10, 0LL);
  normalRoot = this->fields.exceededIcon;
  if ( !normalRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(normalRoot, max > 10, 0LL);
  if ( max >= 11 )
  {
    exceededGaugeSliderList = this->fields.exceededGaugeSliderList;
    v19 = level - 10;
    v20 = max - 10;
  }
  else
  {
    exceededGaugeSliderList = this->fields.normalGaugeSliderList;
    v19 = level;
    v20 = max;
  }
  FriendshipExceedFriendshipGauge__SetGaugeList(v16, exceededGaugeSliderList, v19, v20, fraction, v17);
  normalRoot = this->fields.exceededRoot;
  if ( !normalRoot
    || (normalRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   normalRoot,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_1BC3264(normalRoot, v14);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))normalRoot->klass[1]._1.castClass)(
    normalRoot,
    normalRoot->klass[1]._1.declaringType);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedFriendshipGauge__SetGaugeList(
        FriendshipExceedFriendshipGauge_o *this,
        UISlider_array *sliderList,
        int32_t level,
        int32_t max,
        float fraction,
        const MethodInfo *method)
{
  signed int max_length; // w8
  int32_t v11; // w23
  Il2CppClass **v12; // x8
  UIProgressBar_o *v13; // x22
  float v14; // s0
  UIProgressBar_o *v15; // x0

  if ( !sliderList )
LABEL_15:
    sub_1BC3264(this, sliderList);
  max_length = sliderList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1BC326C(this, sliderList, *(_QWORD *)&level);
      v12 = &sliderList->obj.klass + v11;
      v13 = (UIProgressBar_o *)v12[4];
      if ( !v13 )
        goto LABEL_15;
      this = (FriendshipExceedFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)v12[4],
                                                    0LL);
      if ( !this )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11 < max, 0LL);
      if ( v11 < level )
        break;
      if ( level != v11 )
      {
        v14 = 0.0;
        goto LABEL_12;
      }
      v15 = v13;
      v14 = fraction;
LABEL_13:
      UIProgressBar__set_value(v15, v14, 0LL);
      max_length = sliderList->max_length;
      if ( ++v11 >= max_length )
        return;
    }
    v14 = 1.0;
LABEL_12:
    v15 = v13;
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedFriendshipGauge__SetLabel(
        FriendshipExceedFriendshipGauge_o *this,
        int32_t level,
        int32_t max,
        int32_t type,
        bool isSpecialEffect,
        const MethodInfo *method)
{
  FriendshipExceedFriendshipGauge_o *v8; // x19
  __int64 v9; // x1
  UIFont_o *Font; // x21
  __int64 v11; // x1
  UILabel_o *levelLabel; // x0
  UIExtrusionLabel_o *v13; // x21
  UILabel_o *maxLabel; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  float v19; // s2
  float v20; // s3
  float v21; // s0
  float v22; // s1
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  v23 = max;
  v24 = level;
  if ( (byte_4B05D91 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&level);
    this = (FriendshipExceedFriendshipGauge_o *)sub_1BC3008(&StringLiteral_6747/*"Fonts/FGO-NumberFont-02"*/, v9);
    byte_4B05D91 = 1;
  }
  if ( isSpecialEffect )
  {
    Font = FriendshipExceedFriendshipGauge__GetFont(
             this,
             (System_String_o *)StringLiteral_6747/*"Fonts/FGO-NumberFont-02"*/,
             *(const MethodInfo **)&max);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Font, 0LL, 0LL) )
    {
      levelLabel = (UILabel_o *)v8->fields.levelLabel;
      if ( !levelLabel )
        goto LABEL_26;
      UILabel__set_bitmapFont(levelLabel, Font, 0LL);
      levelLabel = v8->fields.maxLabel;
      if ( !levelLabel )
        goto LABEL_26;
      UILabel__set_bitmapFont(levelLabel, Font, 0LL);
    }
  }
  v13 = v8->fields.levelLabel;
  levelLabel = (UILabel_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !v13 )
    goto LABEL_26;
  UIExtrusionLabel__set_text(v13, (System_String_o *)levelLabel, 0LL);
  maxLabel = v8->fields.maxLabel;
  levelLabel = (UILabel_o *)System_Int32__ToString((int32_t)&v23, 0LL);
  if ( !maxLabel )
    goto LABEL_26;
  UILabel__set_text(maxLabel, (System_String_o *)levelLabel, 0LL);
  if ( type != 2 )
  {
    if ( type == 1 )
    {
      levelLabel = (UILabel_o *)v8->fields.levelLabel;
      if ( !levelLabel )
        goto LABEL_26;
      b = v8->fields.DISABLE_COLOR.fields.b;
      a = v8->fields.DISABLE_COLOR.fields.a;
      r = v8->fields.DISABLE_COLOR.fields.r;
      g = v8->fields.DISABLE_COLOR.fields.g;
    }
    else
    {
      if ( type )
        return;
      levelLabel = (UILabel_o *)v8->fields.levelLabel;
      if ( !levelLabel )
        goto LABEL_26;
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
    }
    UIWidget__set_color((UIWidget_o *)levelLabel, *(UnityEngine_Color_o *)&r, 0LL);
    levelLabel = v8->fields.maxLabel;
    if ( levelLabel )
    {
      v21 = 1.0;
      v22 = 1.0;
      v19 = 1.0;
      v20 = 1.0;
      goto LABEL_24;
    }
LABEL_26:
    sub_1BC3264(levelLabel, v11);
  }
  levelLabel = (UILabel_o *)v8->fields.levelLabel;
  if ( !levelLabel )
    goto LABEL_26;
  v25.fields.r = 1.0;
  v25.fields.g = 1.0;
  v25.fields.b = 1.0;
  v25.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)levelLabel, v25, 0LL);
  levelLabel = v8->fields.maxLabel;
  if ( !levelLabel )
    goto LABEL_26;
  v19 = v8->fields.EXCEEDED_COLOR.fields.b;
  v20 = v8->fields.EXCEEDED_COLOR.fields.a;
  v21 = v8->fields.EXCEEDED_COLOR.fields.r;
  v22 = v8->fields.EXCEEDED_COLOR.fields.g;
LABEL_24:
  UIWidget__set_color((UIWidget_o *)levelLabel, *(UnityEngine_Color_o *)&v21, 0LL);
}