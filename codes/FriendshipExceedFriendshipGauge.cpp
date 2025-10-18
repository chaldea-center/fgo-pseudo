void FriendshipExceedFriendshipGauge___ctor(FriendshipExceedFriendshipGauge_o *this, const MethodInfo *method)
{
  this->fields.DISABLE_COLOR = (struct UnityEngine_Color_o)xmmword_C0E9E0;
  this->fields.EXCEEDED_COLOR = (struct UnityEngine_Color_o)xmmword_C0F570;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FriendshipExceedFriendshipGauge__InitUISpriteAtlas(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  UISprite_o *exceededIconUISprite; // x20

  if ( (byte_4C46F16 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&StringLiteral_20341/*"img_bondsgage_11"*/);
    byte_4C46F16 = 1;
  }
  if ( !this->fields.isInitUISpriteAtlas )
  {
    exceededIconUISprite = this->fields.exceededIconUISprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBondAtlasImage(exceededIconUISprite, (System_String_o *)StringLiteral_20341/*"img_bondsgage_11"*/, 0);
    this->fields.isInitUISpriteAtlas = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendshipExceedFriendshipGauge__Set(
        FriendshipExceedFriendshipGauge_o *this,
        int32_t level,
        int32_t max,
        float fraction,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x4
  UnityEngine_GameObject_o *normalRoot; // x0
  FriendshipExceedFriendshipGauge_o *v13; // x0
  const MethodInfo *v14; // x4
  UISlider_array *exceededGaugeSliderList; // x1
  int v16; // w2
  int v17; // w3

  if ( (byte_4C46F15 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    byte_4C46F15 = 1;
  }
  FriendshipExceedFriendshipGauge__InitUISpriteAtlas(this, *(const MethodInfo **)&level);
  FriendshipExceedFriendshipGauge__SetLabel(this, level, max, type, v11);
  normalRoot = this->fields.normalRoot;
  if ( !normalRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(normalRoot, max < 11, 0);
  normalRoot = this->fields.exceededRoot;
  if ( !normalRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(normalRoot, max > 10, 0);
  normalRoot = this->fields.exceededIcon;
  if ( !normalRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(normalRoot, max > 10, 0);
  if ( max >= 11 )
  {
    exceededGaugeSliderList = this->fields.exceededGaugeSliderList;
    v16 = level - 10;
    v17 = max - 10;
  }
  else
  {
    exceededGaugeSliderList = this->fields.normalGaugeSliderList;
    v16 = level;
    v17 = max;
  }
  FriendshipExceedFriendshipGauge__SetGaugeList(v13, exceededGaugeSliderList, v16, v17, fraction, v14);
  normalRoot = this->fields.exceededRoot;
  if ( !normalRoot
    || (normalRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   normalRoot,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___)) == 0 )
  {
LABEL_12:
    sub_1C372B4(normalRoot);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))normalRoot->klass[1]._1.element_class)(
    normalRoot,
    normalRoot->klass[1]._1.castClass);
}


void FriendshipExceedFriendshipGauge__SetGaugeList(
        FriendshipExceedFriendshipGauge_o *this,
        UISlider_array *sliderList,
        int32_t level,
        int32_t max,
        float fraction,
        const MethodInfo *method)
{
  int max_length; // w8
  int32_t v11; // w23
  Il2CppClass **v12; // x8
  UIProgressBar_o *v13; // x22
  float v14; // s0
  UIProgressBar_o *v15; // x0

  if ( !sliderList )
LABEL_15:
    sub_1C372B4(this);
  max_length = sliderList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(this);
      v12 = &sliderList->obj.klass + v11;
      v13 = (UIProgressBar_o *)v12[4];
      if ( !v13 )
        goto LABEL_15;
      this = (FriendshipExceedFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)v12[4],
                                                    0);
      if ( !this )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11 < max, 0);
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
      UIProgressBar__set_value(v15, v14, 0);
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
void FriendshipExceedFriendshipGauge__SetLabel(
        FriendshipExceedFriendshipGauge_o *this,
        int32_t level,
        int32_t max,
        int32_t type,
        const MethodInfo *method)
{
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *v8; // x0
  UILabel_o *maxLabel; // x21
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  float v14; // s2
  float v15; // s3
  float v16; // s0 OVERLAPPED
  float v17; // s1
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v18 = max;
  v19 = level;
  levelLabel = this->fields.levelLabel;
  v8 = System_Int32__ToString((int32_t)&v19, 0);
  if ( !levelLabel )
    goto LABEL_17;
  UIExtrusionLabel__set_text(levelLabel, v8, 0);
  maxLabel = this->fields.maxLabel;
  v8 = System_Int32__ToString((int32_t)&v18, 0);
  if ( !maxLabel )
    goto LABEL_17;
  UILabel__set_text(maxLabel, v8, 0);
  if ( type != 2 )
  {
    if ( type == 1 )
    {
      v8 = (System_String_o *)this->fields.levelLabel;
      if ( !v8 )
        goto LABEL_17;
      b = this->fields.DISABLE_COLOR.fields.b;
      a = this->fields.DISABLE_COLOR.fields.a;
      r = this->fields.DISABLE_COLOR.fields.r;
      g = this->fields.DISABLE_COLOR.fields.g;
    }
    else
    {
      if ( type )
        return;
      v8 = (System_String_o *)this->fields.levelLabel;
      if ( !v8 )
        goto LABEL_17;
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
    }
    UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&r, 0);
    v8 = (System_String_o *)this->fields.maxLabel;
    if ( v8 )
    {
      v16 = 1.0;
      v17 = 1.0;
      v14 = 1.0;
      v15 = 1.0;
      goto LABEL_15;
    }
LABEL_17:
    sub_1C372B4(v8);
  }
  v8 = (System_String_o *)this->fields.levelLabel;
  if ( !v8 )
    goto LABEL_17;
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v20.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v8, v20, 0);
  v8 = (System_String_o *)this->fields.maxLabel;
  if ( !v8 )
    goto LABEL_17;
  v14 = this->fields.EXCEEDED_COLOR.fields.b;
  v15 = this->fields.EXCEEDED_COLOR.fields.a;
  v16 = this->fields.EXCEEDED_COLOR.fields.r;
  v17 = this->fields.EXCEEDED_COLOR.fields.g;
LABEL_15:
  UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&v16, 0);
}