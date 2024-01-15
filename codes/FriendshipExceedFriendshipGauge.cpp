// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedFriendshipGauge___ctor(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v6; // s0
  int v7; // s2
  int v9; // s1
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  v6 = 1062928384;
  v7 = 1050935296;
  v9 = 0;
  *(_QWORD *)&v10.fields.r = 0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.DISABLE_COLOR = v10;
  this->fields.EXCEEDED_COLOR = UnityEngine_Color__get_yellow(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipExceedFriendshipGauge__InitUISpriteAtlas(
        FriendshipExceedFriendshipGauge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *exceededIconUISprite; // x20

  if ( (byte_40FB2B8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19376/*"img_bondsgage_11"*/, v3);
    byte_40FB2B8 = 1;
  }
  if ( !this->fields.isInitUISpriteAtlas )
  {
    exceededIconUISprite = this->fields.exceededIconUISprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBondAtlasImage(exceededIconUISprite, (System_String_o *)StringLiteral_19376/*"img_bondsgage_11"*/, 0LL);
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
  UnityEngine_GameObject_o *normalRoot; // x0
  UnityEngine_GameObject_o *exceededRoot; // x0
  UnityEngine_GameObject_o *exceededIcon; // x0
  FriendshipExceedFriendshipGauge_o *v15; // x0
  const MethodInfo *v16; // x4
  UISlider_array *normalGaugeSliderList; // x1
  int v18; // w2
  int v19; // w3
  UnityEngine_GameObject_o *v20; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40FB2B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, *(_QWORD *)&level);
    byte_40FB2B7 = 1;
  }
  FriendshipExceedFriendshipGauge__InitUISpriteAtlas(this, *(const MethodInfo **)&level);
  FriendshipExceedFriendshipGauge__SetLabel(this, level, max, type, v11);
  normalRoot = this->fields.normalRoot;
  if ( !normalRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(normalRoot, max < 11, 0LL);
  exceededRoot = this->fields.exceededRoot;
  if ( !exceededRoot )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(exceededRoot, max > 10, 0LL);
  exceededIcon = this->fields.exceededIcon;
  if ( !exceededIcon )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(exceededIcon, max > 10, 0LL);
  if ( max < 11 )
  {
    normalGaugeSliderList = this->fields.normalGaugeSliderList;
    v18 = level;
    v19 = max;
  }
  else
  {
    normalGaugeSliderList = this->fields.exceededGaugeSliderList;
    v18 = level - 10;
    v19 = max - 10;
  }
  FriendshipExceedFriendshipGauge__SetGaugeList(v15, normalGaugeSliderList, v18, v19, fraction, v16);
  v20 = this->fields.exceededRoot;
  if ( !v20
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v20,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *))Component_srcLineSprite->klass[1]._1.castClass)(
    Component_srcLineSprite,
    Component_srcLineSprite->klass[1]._1.declaringType);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UIProgressBar_o *v15; // x0
  float v16; // s0

  if ( !sliderList )
    goto LABEL_14;
  max_length = sliderList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
      {
        sub_B17100(this, sliderList, *(_QWORD *)&level);
        sub_B170A0();
      }
      v12 = &sliderList->obj.klass + v11;
      v13 = (UIProgressBar_o *)v12[4];
      if ( !v13 )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12[4], 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, v11 < max, 0LL);
      if ( v11 >= level )
      {
        if ( level == v11 )
        {
          v15 = v13;
          v16 = fraction;
        }
        else
        {
          v16 = 0.0;
          v15 = v13;
        }
      }
      else
      {
        v15 = v13;
        v16 = 1.0;
      }
      UIProgressBar__set_value(v15, v16, 0LL);
      max_length = sliderList->max_length;
      if ( ++v11 >= max_length )
        return;
    }
LABEL_14:
    sub_B170D4();
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
  UILabel_o *maxLabel; // x21
  System_String_o *v10; // x0
  struct UIExtrusionLabel_o *v11; // x20
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s3
  UIWidget_o *v16; // x0
  struct UILabel_o *v17; // x19
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UIWidget_o *v22; // x0
  UIWidget_o *v23; // x20
  int v24; // s0
  int32_t v28; // [xsp+8h] [xbp-18h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-14h] BYREF

  v28 = max;
  v29 = level;
  levelLabel = this->fields.levelLabel;
  v8 = System_Int32__ToString((int32_t)&v29, 0LL);
  if ( !levelLabel )
    goto LABEL_17;
  UIExtrusionLabel__set_text(levelLabel, v8, 0LL);
  maxLabel = this->fields.maxLabel;
  v10 = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !maxLabel )
    goto LABEL_17;
  UILabel__set_text(maxLabel, v10, 0LL);
  if ( type == 2 )
  {
    v23 = (UIWidget_o *)this->fields.levelLabel;
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
    if ( v23 )
    {
      UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
      v22 = (UIWidget_o *)this->fields.maxLabel;
      if ( v22 )
      {
        r = this->fields.EXCEEDED_COLOR.fields.r;
        g = this->fields.EXCEEDED_COLOR.fields.g;
        b = this->fields.EXCEEDED_COLOR.fields.b;
        a = this->fields.EXCEEDED_COLOR.fields.a;
        goto LABEL_15;
      }
    }
    goto LABEL_17;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v11 = this->fields.levelLabel;
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( v11 )
    {
      v16 = (UIWidget_o *)v11;
      goto LABEL_10;
    }
LABEL_17:
    sub_B170D4();
  }
  v16 = (UIWidget_o *)this->fields.levelLabel;
  if ( !v16 )
    goto LABEL_17;
  v12 = this->fields.DISABLE_COLOR.fields.r;
  v13 = this->fields.DISABLE_COLOR.fields.g;
  v14 = this->fields.DISABLE_COLOR.fields.b;
  v15 = this->fields.DISABLE_COLOR.fields.a;
LABEL_10:
  UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v12, 0LL);
  v17 = this->fields.maxLabel;
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
    goto LABEL_17;
  v22 = (UIWidget_o *)v17;
LABEL_15:
  UIWidget__set_color(v22, *(UnityEngine_Color_o *)&r, 0LL);
}