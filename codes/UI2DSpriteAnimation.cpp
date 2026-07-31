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
  __int64 v5; // x1
  int32_t framerate; // w8
  int32_t mIndex; // w9
  int v8; // w9
  struct UnityEngine_Sprite_array *v9; // x10
  int32_t v10; // w8
  struct UnityEngine_Sprite_array *v11; // x8
  const MethodInfo *v12; // x1

  frames = this->fields.frames;
  if ( frames && frames->max_length )
  {
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
    if ( enabled || this->fields.loop )
      goto LABEL_17;
    framerate = this->fields.framerate;
    mIndex = this->fields.mIndex;
    if ( framerate >= 1 )
      v8 = mIndex + 1;
    else
      v8 = mIndex - 1;
    if ( (v8 & 0x80000000) == 0 )
    {
      v9 = this->fields.frames;
      if ( !v9 )
        goto LABEL_18;
      if ( v8 < SLODWORD(v9->max_length) )
      {
LABEL_17:
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
        UI2DSpriteAnimation__UpdateSprite(this, v12);
        return;
      }
    }
    if ( (framerate & 0x80000000) == 0 )
    {
      v10 = 0;
LABEL_16:
      this->fields.mIndex = v10;
      goto LABEL_17;
    }
    v11 = this->fields.frames;
    if ( v11 )
    {
      v10 = LODWORD(v11->max_length) - 1;
      goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(enabled, v5);
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
      sub_21FFECC(this, method);
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
  __int64 v4; // x1
  float v5; // s0
  int32_t framerate; // w8
  int32_t mIndex; // w9
  _BOOL4 loop; // w10
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
    v5 = this->fields.ignoreTimeScale ? RealTime__get_time(0) : UnityEngine_Time__get_time(0);
    if ( this->fields.mUpdate < v5 )
    {
      framerate = this->fields.framerate;
      mIndex = this->fields.mIndex;
      loop = this->fields.loop;
      this->fields.mUpdate = v5;
      if ( framerate >= 1 )
        v9 = (unsigned int)(mIndex + 1);
      else
        v9 = (unsigned int)(mIndex - 1);
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
        sub_21FFECC(v9, v4);
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
  __int64 v4; // x1
  UnityEngine_Object_o *mNguiSprite; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x22
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x1
  float time; // s0
  int32_t framerate; // w8
  UnityEngine_Object_o *v27; // x20
  UnityEngine_SpriteRenderer_o *v28; // x0
  __int64 v29; // x1
  struct UnityEngine_Sprite_array *frames; // x8
  __int64 mIndex; // x9
  UnityEngine_Object_o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct UnityEngine_Sprite_array *v39; // x8
  __int64 v40; // x9
  struct UI2DSprite_o *v41; // x10
  struct UnityEngine_Sprite_o *v42; // x1

  if ( (byte_593CF3F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UI2DSprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF3F = 1;
  }
  mUnitySprite = (UnityEngine_Object_o *)this->fields.mUnitySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mUnitySprite, 0, 0) )
  {
    mNguiSprite = (UnityEngine_Object_o *)this->fields.mNguiSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(mNguiSprite, 0, 0) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
      this->fields.mUnitySprite = (struct UnityEngine_SpriteRenderer_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mUnitySprite,
        (int32_t)Component_object,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UI2DSprite___);
      this->fields.mNguiSprite = (struct UI2DSprite_o *)v13;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mNguiSprite,
        (int32_t)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v21 = (UnityEngine_Object_o *)this->fields.mUnitySprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Equality(v21, 0, 0) )
      {
        v23 = (UnityEngine_Object_o *)this->fields.mNguiSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
        if ( UnityEngine_Object__op_Equality(v23, 0, 0) )
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
  v27 = (UnityEngine_Object_o *)this->fields.mUnitySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  v28 = (UnityEngine_SpriteRenderer_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
  if ( ((unsigned __int8)v28 & 1) != 0 )
  {
    frames = this->fields.frames;
    if ( !frames )
      goto LABEL_36;
    mIndex = this->fields.mIndex;
    if ( (unsigned int)mIndex < LODWORD(frames->max_length) )
    {
      v28 = this->fields.mUnitySprite;
      if ( v28 )
      {
        UnityEngine_SpriteRenderer__set_sprite(v28, frames->m_Items[mIndex], 0);
        return;
      }
LABEL_36:
      sub_21FFECC(v28, v29);
    }
LABEL_37:
    sub_21FFED4(v28);
  }
  v32 = (UnityEngine_Object_o *)this->fields.mNguiSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v28 = (UnityEngine_SpriteRenderer_o *)UnityEngine_Object__op_Inequality(v32, 0, 0);
  if ( ((unsigned __int8)v28 & 1) != 0 )
  {
    v39 = this->fields.frames;
    if ( !v39 )
      goto LABEL_36;
    v40 = this->fields.mIndex;
    if ( (unsigned int)v40 >= LODWORD(v39->max_length) )
      goto LABEL_37;
    v41 = this->fields.mNguiSprite;
    if ( !v41 )
      goto LABEL_36;
    v42 = v39->m_Items[v40];
    v41->fields.nextSprite = v42;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->fields.nextSprite, (int32_t)v42, v33, v34, v35, v36, v37, v38);
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