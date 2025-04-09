void __fastcall FriendshipExceedFriendshipGauge___ctor(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  this->fields.DISABLE_COLOR = (struct UnityEngine_Color_o)xmmword_BAA000;
  this->fields.EXCEEDED_COLOR = (struct UnityEngine_Color_o)xmmword_BAAAD0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipExceedFriendshipGauge__InitUISpriteAtlas(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *exceededIconUISprite; // x20

  if ( (byte_49BE91C & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_19972/*"img_bondsgage_11"*/, v3);
    byte_49BE91C = 1;
  }
  if ( !this->fields.isInitUISpriteAtlas )
  {
    exceededIconUISprite = this->fields.exceededIconUISprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBondAtlasImage(exceededIconUISprite, (System_String_o *)StringLiteral_19972/*"img_bondsgage_11"*/, 0LL);
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
        const MethodInfo *method)
{
  const MethodInfo *v11; // x4
  __int64 v12; // x1
  UnityEngine_GameObject_o *normalRoot; // x0
  FriendshipExceedFriendshipGauge_o *v14; // x0
  const MethodInfo *v15; // x4
  UISlider_array *exceededGaugeSliderList; // x1
  int v17; // w2
  int v18; // w3

  if ( (byte_49BE91B & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, *(_QWORD *)&level);
    byte_49BE91B = 1;
  }
  FriendshipExceedFriendshipGauge__InitUISpriteAtlas(this, *(const MethodInfo **)&level);
  FriendshipExceedFriendshipGauge__SetLabel(this, level, max, type, v11);
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
    v17 = level - 10;
    v18 = max - 10;
  }
  else
  {
    exceededGaugeSliderList = this->fields.normalGaugeSliderList;
    v17 = level;
    v18 = max;
  }
  FriendshipExceedFriendshipGauge__SetGaugeList(v14, exceededGaugeSliderList, v17, v18, fraction, v15);
  normalRoot = this->fields.exceededRoot;
  if ( !normalRoot
    || (normalRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   normalRoot,
                                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_1B4D1EC(normalRoot, v12);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))normalRoot->klass[1]._1.castClass)(
    normalRoot,
    normalRoot->klass[1]._1.declaringType);
}


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
    sub_1B4D1EC(this, sliderList);
  max_length = sliderList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1B4D1F4(this, sliderList);
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
        const MethodInfo *method)
{
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *maxLabel; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  float v15; // s2
  float v16; // s3
  float v17; // s0
  float v18; // s1
  int32_t v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v19 = max;
  v20 = level;
  levelLabel = this->fields.levelLabel;
  v8 = System_Int32__ToString((int32_t)&v20, 0LL);
  if ( !levelLabel )
    goto LABEL_17;
  UIExtrusionLabel__set_text(levelLabel, v8, 0LL);
  maxLabel = this->fields.maxLabel;
  v8 = System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !maxLabel )
    goto LABEL_17;
  UILabel__set_text(maxLabel, v8, 0LL);
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
    UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&r, 0LL);
    v8 = (System_String_o *)this->fields.maxLabel;
    if ( v8 )
    {
      v17 = 1.0;
      v18 = 1.0;
      v15 = 1.0;
      v16 = 1.0;
      goto LABEL_15;
    }
LABEL_17:
    sub_1B4D1EC(v8, v9);
  }
  v8 = (System_String_o *)this->fields.levelLabel;
  if ( !v8 )
    goto LABEL_17;
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v8, v21, 0LL);
  v8 = (System_String_o *)this->fields.maxLabel;
  if ( !v8 )
    goto LABEL_17;
  v15 = this->fields.EXCEEDED_COLOR.fields.b;
  v16 = this->fields.EXCEEDED_COLOR.fields.a;
  v17 = this->fields.EXCEEDED_COLOR.fields.r;
  v18 = this->fields.EXCEEDED_COLOR.fields.g;
LABEL_15:
  UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&v17, 0LL);
}