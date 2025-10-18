void UISpriteAnimation___ctor(UISpriteAnimation_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C47891 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C47891 = 1;
  }
  this->fields.mFPS = 30;
  v5 = StringLiteral_1/*""*/;
  this->fields.mPrefix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mPrefix, v5, v2, v3);
  *(_WORD *)&this->fields.mLoop = 257;
  this->fields.mActive = 1;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mSpriteNames = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSpriteNames, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UISpriteAnimation__Pause(UISpriteAnimation_o *this, const MethodInfo *method)
{
  this->fields.mActive = 0;
}


void UISpriteAnimation__Play(UISpriteAnimation_o *this, const MethodInfo *method)
{
  this->fields.mActive = 1;
}


void UISpriteAnimation__RebuildSpriteList(UISpriteAnimation_o *this, const MethodInfo *method)
{
  struct UISprite_o **p_mSprite; // x20
  UnityEngine_Object_o *mSprite; // x21
  void *spriteList; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_string__o *mSpriteNames; // x8
  int32_t size; // w2
  int v11; // w9
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *mAtlas; // x21
  int v14; // w23
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  Il2CppObject *Item; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *klass; // x1
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8

  if ( (byte_4C4788F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4788F = 1;
  }
  p_mSprite = &this->fields.mSprite;
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  spriteList = (void *)UnityEngine_Object__op_Equality(mSprite, 0, 0);
  if ( ((unsigned __int8)spriteList & 1) != 0 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    this->fields.mSprite = (struct UISprite_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)Component_object, v7, v8);
  }
  mSpriteNames = this->fields.mSpriteNames;
  if ( !mSpriteNames )
    goto LABEL_37;
  size = mSpriteNames->fields._size;
  v11 = mSpriteNames->fields._version + 1;
  mSpriteNames->fields._size = 0;
  mSpriteNames->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mSpriteNames->fields._items, 0, size, 0);
  v12 = (UnityEngine_Object_o *)*p_mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  spriteList = (void *)UnityEngine_Object__op_Inequality(v12, 0, 0);
  if ( ((unsigned __int8)spriteList & 1) != 0 )
  {
    if ( !*p_mSprite )
      goto LABEL_37;
    mAtlas = (UnityEngine_Object_o *)(*p_mSprite)->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    spriteList = (void *)UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
    if ( ((unsigned __int8)spriteList & 1) != 0 )
    {
      if ( *p_mSprite )
      {
        spriteList = (*p_mSprite)->fields.mAtlas;
        if ( spriteList )
        {
          spriteList = UIAtlas__get_spriteList((UIAtlas_o *)spriteList, 0);
          if ( spriteList )
          {
            v14 = *((_DWORD *)spriteList + 6);
            v15 = (System_Collections_Generic_List_object__o *)spriteList;
            if ( v14 >= 1 )
            {
              v16 = 0;
              while ( 1 )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v15,
                         v16,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
                spriteList = (void *)System_String__IsNullOrEmpty(this->fields.mPrefix, 0);
                if ( ((unsigned __int8)spriteList & 1) != 0 )
                  break;
                if ( !Item )
                  goto LABEL_37;
                spriteList = Item[1].klass;
                if ( !spriteList )
                  goto LABEL_37;
                if ( System_String__StartsWith((System_String_o *)spriteList, this->fields.mPrefix, 0) )
                  goto LABEL_28;
LABEL_33:
                if ( v14 == ++v16 )
                  goto LABEL_34;
              }
              if ( !Item )
                goto LABEL_37;
LABEL_28:
              spriteList = this->fields.mSpriteNames;
              if ( !spriteList )
                goto LABEL_37;
              klass = (Il2CppObject *)Item[1].klass;
              v21 = *((_QWORD *)spriteList + 2);
              v22 = Method_System_Collections_Generic_List_string__Add__;
              ++*((_DWORD *)spriteList + 7);
              if ( !v21 )
                goto LABEL_37;
              v23 = *((int *)spriteList + 6);
              if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)spriteList,
                  klass,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = v21 + 8 * v23;
                *((_DWORD *)spriteList + 6) = v23 + 1;
                *(_QWORD *)(v24 + 32) = klass;
                sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)klass, v18, v19);
              }
              goto LABEL_33;
            }
LABEL_34:
            spriteList = this->fields.mSpriteNames;
            if ( spriteList )
            {
              System_Collections_Generic_List_object___Sort(
                (System_Collections_Generic_List_object__o *)spriteList,
                (const MethodInfo_37A4A08 *)Method_System_Collections_Generic_List_string__Sort__);
              return;
            }
          }
        }
      }
LABEL_37:
      sub_1C372B4(spriteList);
    }
  }
}


void UISpriteAnimation__ResetToBeginning(UISpriteAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x20
  System_Collections_Generic_List_object__o *mSpriteNames; // x0
  UISprite_o *v5; // x20

  if ( (byte_4C47890 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47890 = 1;
  }
  this->fields.mActive = 1;
  this->fields.mIndex = 0;
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    mSpriteNames = (System_Collections_Generic_List_object__o *)this->fields.mSpriteNames;
    if ( !mSpriteNames )
      goto LABEL_13;
    if ( mSpriteNames->fields._size >= 1 )
    {
      v5 = this->fields.mSprite;
      mSpriteNames = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    mSpriteNames,
                                                                    this->fields.mIndex,
                                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !v5 )
        goto LABEL_13;
      UISprite__set_spriteName(v5, (System_String_o *)mSpriteNames, 0);
      if ( this->fields.mSnap )
      {
        mSpriteNames = (System_Collections_Generic_List_object__o *)this->fields.mSprite;
        if ( mSpriteNames )
        {
          ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mSpriteNames->klass->vtable._33_get_Item.methodPtr)(
            mSpriteNames,
            mSpriteNames->klass->vtable._33_get_Item.method);
          return;
        }
LABEL_13:
        sub_1C372B4(mSpriteNames);
      }
    }
  }
}


void UISpriteAnimation__Update(UISpriteAnimation_o *this, const MethodInfo *method)
{
  UISpriteAnimation_o *v2; // x19
  struct System_Collections_Generic_List_string__o *mSpriteNames; // x8
  float mDelta; // s8
  float deltaTime; // s0
  int mFPS; // s1
  float v7; // s0
  float v8; // s1
  int32_t mIndex; // w8
  float v10; // s0
  int32_t v11; // w1
  _BOOL4 mLoop; // w8
  UISprite_o *mSprite; // x20

  v2 = this;
  if ( (byte_4C4788E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (UISpriteAnimation_o *)sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C4788E = 1;
  }
  if ( v2->fields.mActive )
  {
    mSpriteNames = v2->fields.mSpriteNames;
    if ( !mSpriteNames )
      goto LABEL_23;
    if ( mSpriteNames->fields._size >= 2 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      if ( UnityEngine_Application__get_isPlaying(0) && v2->fields.mFPS >= 1 )
      {
        mDelta = v2->fields.mDelta;
        deltaTime = RealTime__get_deltaTime(0);
        mFPS = v2->fields.mFPS;
        v7 = mDelta + deltaTime;
        v2->fields.mDelta = v7;
        v8 = 1.0 / (float)mFPS;
        if ( v8 < v7 )
        {
          mIndex = v2->fields.mIndex;
          this = (UISpriteAnimation_o *)v2->fields.mSpriteNames;
          v10 = v7 - v8;
          if ( v8 <= 0.0 )
            v10 = 0.0;
          v11 = mIndex + 1;
          v2->fields.mDelta = v10;
          v2->fields.mIndex = mIndex + 1;
          if ( !this )
            goto LABEL_23;
          if ( v11 >= SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            mLoop = v2->fields.mLoop;
            v11 = 0;
            v2->fields.mIndex = 0;
            v2->fields.mActive = mLoop;
          }
          else
          {
            mLoop = v2->fields.mActive;
          }
          if ( mLoop )
          {
            mSprite = v2->fields.mSprite;
            this = (UISpriteAnimation_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v11,
                                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !mSprite )
              goto LABEL_23;
            UISprite__set_spriteName(mSprite, (System_String_o *)this, 0);
            if ( v2->fields.mSnap )
            {
              this = (UISpriteAnimation_o *)v2->fields.mSprite;
              if ( this )
              {
                ((void (__fastcall *)(UISpriteAnimation_o *, void *))this->klass[2]._1.namespaze)(
                  this,
                  this->klass[2]._1.byval_arg.data);
                return;
              }
LABEL_23:
              sub_1C372B4(this);
            }
          }
        }
      }
    }
  }
}


int32_t UISpriteAnimation__get_frames(UISpriteAnimation_o *this, const MethodInfo *method)
{
  UISpriteAnimation_o *v2; // x19
  struct System_Collections_Generic_List_string__o *mSpriteNames; // x8

  v2 = this;
  if ( (byte_4C4788D & 1) == 0 )
  {
    this = (UISpriteAnimation_o *)sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C4788D = 1;
  }
  mSpriteNames = v2->fields.mSpriteNames;
  if ( !mSpriteNames )
    sub_1C372B4(this);
  return mSpriteNames->fields._size;
}


int32_t UISpriteAnimation__get_framesPerSecond(UISpriteAnimation_o *this, const MethodInfo *method)
{
  return this->fields.mFPS;
}


bool UISpriteAnimation__get_isPlaying(UISpriteAnimation_o *this, const MethodInfo *method)
{
  return this->fields.mActive;
}


bool UISpriteAnimation__get_loop(UISpriteAnimation_o *this, const MethodInfo *method)
{
  return this->fields.mLoop;
}


System_String_o *UISpriteAnimation__get_namePrefix(UISpriteAnimation_o *this, const MethodInfo *method)
{
  return this->fields.mPrefix;
}


void UISpriteAnimation__set_framesPerSecond(UISpriteAnimation_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.mFPS = value;
}


void UISpriteAnimation__set_loop(UISpriteAnimation_o *this, bool value, const MethodInfo *method)
{
  this->fields.mLoop = value;
}


void UISpriteAnimation__set_namePrefix(UISpriteAnimation_o *this, System_String_o *value, const MethodInfo *method)
{
  struct System_String_o **p_mPrefix; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  p_mPrefix = &this->fields.mPrefix;
  if ( System_String__op_Inequality(this->fields.mPrefix, value, 0) )
  {
    this->fields.mPrefix = value;
    sub_1C36FFC((CGThumbnailListItem_o *)p_mPrefix, (int32_t)value, v6, v7);
    UISpriteAnimation__RebuildSpriteList(this, v8);
  }
}