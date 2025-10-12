void UI2DSpriteAnimation___ctor(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  this->fields.framerate = 20;
  *(_WORD *)&this->fields.ignoreTimeScale = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UI2DSpriteAnimation__Pause(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void UI2DSpriteAnimation__Play(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  struct UnityEngine_Sprite_array *frames; // x8
  _BOOL8 enabled; // x0
  int32_t framerate; // w8
  int v6; // w10
  int v7; // w9
  struct UnityEngine_Sprite_array *v8; // x10
  int32_t v9; // w8
  struct UnityEngine_Sprite_array *v10; // x8
  const MethodInfo *v11; // x1

  frames = this->fields.frames;
  if ( frames && frames->max_length )
  {
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
    if ( enabled || this->fields.loop )
      goto LABEL_17;
    framerate = this->fields.framerate;
    if ( framerate < 1 )
      v6 = -1;
    else
      v6 = 1;
    v7 = v6 + this->fields.mIndex;
    if ( v7 >= 0 )
    {
      v8 = this->fields.frames;
      if ( !v8 )
        goto LABEL_18;
      if ( v7 < SLODWORD(v8->max_length) )
      {
LABEL_17:
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
        UI2DSpriteAnimation__UpdateSprite(this, v11);
        return;
      }
    }
    if ( (framerate & 0x80000000) == 0 )
    {
      v9 = 0;
LABEL_16:
      this->fields.mIndex = v9;
      goto LABEL_17;
    }
    v10 = this->fields.frames;
    if ( v10 )
    {
      v9 = LODWORD(v10->max_length) - 1;
      goto LABEL_16;
    }
LABEL_18:
    sub_1C32E7C(enabled);
  }
}


void UI2DSpriteAnimation__ResetToBeginning(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  int32_t v2; // w8
  struct UnityEngine_Sprite_array *frames; // x8

  if ( this->fields.framerate < 0 )
  {
    frames = this->fields.frames;
    if ( !frames )
      sub_1C32E7C(this);
    v2 = LODWORD(frames->max_length) - 1;
  }
  else
  {
    v2 = 0;
  }
  this->fields.mIndex = v2;
  UI2DSpriteAnimation__UpdateSprite(this, method);
}


void UI2DSpriteAnimation__Update(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  struct UnityEngine_Sprite_array *frames; // x8
  float v4; // s0
  int32_t framerate; // w8
  int32_t mIndex; // w9
  _BOOL4 loop; // w10
  int v8; // w8
  __int64 v9; // x0
  struct UnityEngine_Sprite_array *v10; // x8
  const MethodInfo *v11; // x1

  frames = this->fields.frames;
  if ( !frames || !frames->max_length )
  {
LABEL_18:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    return;
  }
  if ( this->fields.framerate )
  {
    v4 = this->fields.ignoreTimeScale ? RealTime__get_time(0) : UnityEngine_Time__get_time(0);
    if ( this->fields.mUpdate < v4 )
    {
      framerate = this->fields.framerate;
      mIndex = this->fields.mIndex;
      loop = this->fields.loop;
      this->fields.mUpdate = v4;
      if ( framerate < 1 )
        v8 = -1;
      else
        v8 = 1;
      v9 = (unsigned int)(v8 + mIndex);
      if ( loop )
      {
        v10 = this->fields.frames;
        if ( v10 )
        {
LABEL_13:
          this->fields.mIndex = NGUIMath__RepeatIndex(v9, v10->max_length, 0);
          UI2DSpriteAnimation__UpdateSprite(this, v11);
          return;
        }
LABEL_19:
        sub_1C32E7C(v9);
      }
      if ( (v9 & 0x80000000) == 0 )
      {
        v10 = this->fields.frames;
        if ( !v10 )
          goto LABEL_19;
        if ( (int)v9 < SLODWORD(v10->max_length) )
          goto LABEL_13;
      }
      goto LABEL_18;
    }
  }
}


void UI2DSpriteAnimation__UpdateSprite(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mUnitySprite; // x21
  UnityEngine_Object_o *mNguiSprite; // x22
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *v11; // x22
  UnityEngine_Object_o *v12; // x21
  float time; // s0
  int32_t framerate; // w8
  UnityEngine_Object_o *v15; // x20
  UnityEngine_SpriteRenderer_o *v16; // x0
  struct UnityEngine_Sprite_array *frames; // x8
  __int64 mIndex; // x9
  UnityEngine_Object_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UnityEngine_Sprite_array *v22; // x8
  __int64 v23; // x9
  struct UI2DSprite_o *v24; // x10
  struct UnityEngine_Sprite_o *v25; // x1

  if ( (byte_4C3C268 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UI2DSprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C268 = 1;
  }
  mUnitySprite = (UnityEngine_Object_o *)this->fields.mUnitySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mUnitySprite, 0, 0) )
  {
    mNguiSprite = (UnityEngine_Object_o *)this->fields.mNguiSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mNguiSprite, 0, 0) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
      this->fields.mUnitySprite = (struct UnityEngine_SpriteRenderer_o *)Component_object;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mUnitySprite, (int32_t)Component_object, v6, v7);
      v8 = UnityEngine_Component__GetComponent_object_(
             (UnityEngine_Component_o *)this,
             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UI2DSprite___);
      this->fields.mNguiSprite = (struct UI2DSprite_o *)v8;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mNguiSprite, (int32_t)v8, v9, v10);
      v11 = (UnityEngine_Object_o *)this->fields.mUnitySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
      {
        v12 = (UnityEngine_Object_o *)this->fields.mNguiSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v12, 0, 0) )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
          return;
        }
      }
    }
  }
  if ( this->fields.ignoreTimeScale )
    time = RealTime__get_time(0);
  else
    time = UnityEngine_Time__get_time(0);
  framerate = this->fields.framerate;
  if ( framerate )
    this->fields.mUpdate = time + fabsf(1.0 / (float)framerate);
  v15 = (UnityEngine_Object_o *)this->fields.mUnitySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = (UnityEngine_SpriteRenderer_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    frames = this->fields.frames;
    if ( !frames )
      goto LABEL_36;
    mIndex = this->fields.mIndex;
    if ( (unsigned int)mIndex < LODWORD(frames->max_length) )
    {
      v16 = this->fields.mUnitySprite;
      if ( v16 )
      {
        UnityEngine_SpriteRenderer__set_sprite(v16, frames->m_Items[mIndex], 0);
        return;
      }
LABEL_36:
      sub_1C32E7C(v16);
    }
LABEL_37:
    sub_1C32E84(v16);
  }
  v19 = (UnityEngine_Object_o *)this->fields.mNguiSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = (UnityEngine_SpriteRenderer_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    v22 = this->fields.frames;
    if ( !v22 )
      goto LABEL_36;
    v23 = this->fields.mIndex;
    if ( (unsigned int)v23 >= LODWORD(v22->max_length) )
      goto LABEL_37;
    v24 = this->fields.mNguiSprite;
    if ( !v24 )
      goto LABEL_36;
    v25 = v22->m_Items[v23];
    v24->fields.nextSprite = v25;
    sub_1C32BC4((CGThumbnailListItem_o *)&v24->fields.nextSprite, (int32_t)v25, v20, v21);
  }
}


int32_t UI2DSpriteAnimation__get_framesPerSecond(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  return this->fields.framerate;
}


bool UI2DSpriteAnimation__get_isPlaying(UI2DSpriteAnimation_o *this, const MethodInfo *method)
{
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
}


void UI2DSpriteAnimation__set_framesPerSecond(UI2DSpriteAnimation_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.framerate = value;
}