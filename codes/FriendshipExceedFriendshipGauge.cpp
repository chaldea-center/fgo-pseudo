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
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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

  if ( (byte_42171D3 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19512/*"img_bondsgage_11"*/, v3);
    byte_42171D3 = 1;
  }
  if ( !this->fields.isInitUISpriteAtlas )
  {
    exceededIconUISprite = this->fields.exceededIconUISprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBondAtlasImage(exceededIconUISprite, (System_String_o *)StringLiteral_19512/*"img_bondsgage_11"*/, 0LL);
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
  FriendshipExceedFriendshipGauge_o *v13; // x0
  const MethodInfo *v14; // x4
  UISlider_array *normalGaugeSliderList; // x1
  int v16; // w2
  int v17; // w3

  if ( (byte_42171D2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, *(_QWORD *)&level);
    byte_42171D2 = 1;
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
  if ( max < 11 )
  {
    normalGaugeSliderList = this->fields.normalGaugeSliderList;
    v16 = level;
    v17 = max;
  }
  else
  {
    normalGaugeSliderList = this->fields.exceededGaugeSliderList;
    v16 = level - 10;
    v17 = max - 10;
  }
  FriendshipExceedFriendshipGauge__SetGaugeList(v13, normalGaugeSliderList, v16, v17, fraction, v14);
  normalRoot = this->fields.exceededRoot;
  if ( !normalRoot
    || (normalRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   normalRoot,
                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_B0D97C(normalRoot);
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
  UIProgressBar_o *v14; // x0
  float v15; // s0
  __int64 v16; // x0

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
        v16 = sub_B0D9A8(this);
        sub_B0D948(v16, 0LL);
      }
      v12 = &sliderList->obj.klass + v11;
      v13 = (UIProgressBar_o *)v12[4];
      if ( !v13 )
        break;
      this = (FriendshipExceedFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)v12[4],
                                                    0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11 < max, 0LL);
      if ( v11 >= level )
      {
        if ( level == v11 )
        {
          v14 = v13;
          v15 = fraction;
        }
        else
        {
          v15 = 0.0;
          v14 = v13;
        }
      }
      else
      {
        v14 = v13;
        v15 = 1.0;
      }
      UIProgressBar__set_value(v14, v15, 0LL);
      max_length = sliderList->max_length;
      if ( ++v11 >= max_length )
        return;
    }
LABEL_14:
    sub_B0D97C(this);
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
  struct UIExtrusionLabel_o *v10; // x20
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  struct UILabel_o *v15; // x19
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UIWidget_o *v20; // x20
  int v21; // s0
  int32_t v25; // [xsp+8h] [xbp-18h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-14h] BYREF

  v25 = max;
  v26 = level;
  levelLabel = this->fields.levelLabel;
  v8 = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !levelLabel )
    goto LABEL_17;
  UIExtrusionLabel__set_text(levelLabel, v8, 0LL);
  maxLabel = this->fields.maxLabel;
  v8 = System_Int32__ToString((int32_t)&v25, 0LL);
  if ( !maxLabel )
    goto LABEL_17;
  UILabel__set_text(maxLabel, v8, 0LL);
  if ( type == 2 )
  {
    v20 = (UIWidget_o *)this->fields.levelLabel;
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
    if ( v20 )
    {
      UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
      v8 = (System_String_o *)this->fields.maxLabel;
      if ( v8 )
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
    v10 = this->fields.levelLabel;
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( v10 )
    {
      v8 = (System_String_o *)v10;
      goto LABEL_10;
    }
LABEL_17:
    sub_B0D97C(v8);
  }
  v8 = (System_String_o *)this->fields.levelLabel;
  if ( !v8 )
    goto LABEL_17;
  v11 = this->fields.DISABLE_COLOR.fields.r;
  v12 = this->fields.DISABLE_COLOR.fields.g;
  v13 = this->fields.DISABLE_COLOR.fields.b;
  v14 = this->fields.DISABLE_COLOR.fields.a;
LABEL_10:
  UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&v11, 0LL);
  v15 = this->fields.maxLabel;
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  if ( !v15 )
    goto LABEL_17;
  v8 = (System_String_o *)v15;
LABEL_15:
  UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&r, 0LL);
}