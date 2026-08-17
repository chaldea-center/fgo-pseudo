void FriendshipExceedFriendshipGauge___ctor(FriendshipExceedFriendshipGauge_o *this, const MethodInfo *method)
{
  this->fields.DISABLE_COLOR = (struct UnityEngine_Color_o)xmmword_E9D730;
  this->fields.EXCEEDED_COLOR = (struct UnityEngine_Color_o)xmmword_E9BE80;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FriendshipExceedFriendshipGauge__InitUISpriteAtlas(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  UISprite_o *exceededIconUISprite; // x20

  if ( (byte_5974AFB & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21324/*"img_bondsgage_11"*/);
    byte_5974AFB = 1;
  }
  if ( !this->fields.isInitUISpriteAtlas )
  {
    exceededIconUISprite = this->fields.exceededIconUISprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__SetBondAtlasImage(exceededIconUISprite, (System_String_o *)StringLiteral_21324/*"img_bondsgage_11"*/, 0);
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *normalRoot; // x0
  FriendshipExceedFriendshipGauge_o *v14; // x0
  const MethodInfo *v15; // x4
  UISlider_array *exceededGaugeSliderList; // x1
  int v17; // w2
  int v18; // w3

  if ( (byte_5974AFA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    byte_5974AFA = 1;
  }
  FriendshipExceedFriendshipGauge__InitUISpriteAtlas(this, *(const MethodInfo **)&level);
  FriendshipExceedFriendshipGauge__SetLabel(this, level, max, type, v11);
  normalRoot = this->fields.normalRoot;
  if ( !normalRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(normalRoot, max < 11, 0);
  normalRoot = this->fields.exceededRoot;
  if ( !normalRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(normalRoot, max > 10, 0);
  normalRoot = this->fields.exceededIcon;
  if ( !normalRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(normalRoot, max > 10, 0);
  if ( max >= 11 )
  {
    GameObjectExtensions__SetLocalPositionY(this->fields.exceededRoot, this->fields.exceededRootDefaultPosY, 0);
    if ( (unsigned int)max >= 0x10 )
      GameObjectExtensions__SetLocalPositionY(
        this->fields.exceededRoot,
        this->fields.exceededRootDefaultPosY + this->fields.exceededRootAdjustPosY,
        0);
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
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___)) == 0 )
  {
LABEL_14:
    sub_2213CDC(normalRoot, v12);
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

  if ( !sliderList )
    goto LABEL_14;
  max_length = sliderList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v12 = &sliderList->obj.klass + v11;
      v13 = (UIProgressBar_o *)v12[4];
      if ( !v13 )
        break;
      this = (FriendshipExceedFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)v12[4],
                                                    0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11 < max, 0);
      if ( level == v11 )
        v14 = fraction;
      else
        v14 = 0.0;
      if ( v11 < level )
        v14 = 1.0;
      UIProgressBar__set_value(v13, v14, 0);
      max_length = sliderList->max_length;
      if ( ++v11 >= max_length )
        return;
    }
LABEL_14:
    sub_2213CDC(this, sliderList);
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
  __int64 v9; // x1
  UILabel_o *maxLabel; // x21
  float v11; // s0 OVERLAPPED
  float v12; // s1
  float v13; // s2
  float v14; // s3
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  int32_t v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v19 = max;
  v20 = level;
  levelLabel = this->fields.levelLabel;
  v8 = System_Int32__ToString((int32_t)&v20, 0);
  if ( !levelLabel )
    goto LABEL_17;
  UIExtrusionLabel__set_text(levelLabel, v8, 0);
  maxLabel = this->fields.maxLabel;
  v8 = System_Int32__ToString((int32_t)&v19, 0);
  if ( !maxLabel )
    goto LABEL_17;
  UILabel__set_text(maxLabel, v8, 0);
  if ( type == 2 )
  {
    v8 = (System_String_o *)this->fields.levelLabel;
    if ( v8 )
    {
      v21.fields.r = 1.0;
      v21.fields.g = 1.0;
      v21.fields.b = 1.0;
      v21.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)v8, v21, 0);
      v8 = (System_String_o *)this->fields.maxLabel;
      if ( v8 )
      {
        b = this->fields.EXCEEDED_COLOR.fields.b;
        a = this->fields.EXCEEDED_COLOR.fields.a;
        r = this->fields.EXCEEDED_COLOR.fields.r;
        g = this->fields.EXCEEDED_COLOR.fields.g;
        goto LABEL_15;
      }
    }
    goto LABEL_17;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v8 = (System_String_o *)this->fields.levelLabel;
    if ( v8 )
    {
      v11 = 1.0;
      v12 = 1.0;
      v13 = 1.0;
      v14 = 1.0;
      goto LABEL_10;
    }
LABEL_17:
    sub_2213CDC(v8, v9);
  }
  v8 = (System_String_o *)this->fields.levelLabel;
  if ( !v8 )
    goto LABEL_17;
  v13 = this->fields.DISABLE_COLOR.fields.b;
  v14 = this->fields.DISABLE_COLOR.fields.a;
  v11 = this->fields.DISABLE_COLOR.fields.r;
  v12 = this->fields.DISABLE_COLOR.fields.g;
LABEL_10:
  UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&v11, 0);
  v8 = (System_String_o *)this->fields.maxLabel;
  if ( !v8 )
    goto LABEL_17;
  r = 1.0;
  g = 1.0;
  b = 1.0;
  a = 1.0;
LABEL_15:
  UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&r, 0);
}