void UISpriteAnimation___ctor(UISpriteAnimation_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CF2FA2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF2FA2 = 1;
  }
  this->fields.mFPS = 30;
  v9 = StringLiteral_1/*""*/;
  this->fields.mPrefix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mPrefix, v9, v2, v3, v4, v5, v6, v7);
  *(_WORD *)&this->fields.mLoop = 257;
  this->fields.mActive = 1;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mSpriteNames = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mSpriteNames, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  Il2CppObject *klass; // x1
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Collections_Generic_List_string__o *mSpriteNames; // x8
  int32_t size; // w2
  int v16; // w9
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *mAtlas; // x21
  int v19; // w23
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w21
  Il2CppObject *Item; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8

  if ( (byte_4CF2FA0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2FA0 = 1;
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
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    this->fields.mSprite = (struct UISprite_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mSprite,
      (int32_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  mSpriteNames = this->fields.mSpriteNames;
  if ( !mSpriteNames )
    goto LABEL_37;
  size = mSpriteNames->fields._size;
  v16 = mSpriteNames->fields._version + 1;
  mSpriteNames->fields._size = 0;
  mSpriteNames->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mSpriteNames->fields._items, 0, size, 0);
  v17 = (UnityEngine_Object_o *)*p_mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  spriteList = (void *)UnityEngine_Object__op_Inequality(v17, 0, 0);
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
            v19 = *((_DWORD *)spriteList + 6);
            v20 = (System_Collections_Generic_List_object__o *)spriteList;
            if ( v19 >= 1 )
            {
              v21 = 0;
              while ( 1 )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v20,
                         v21,
                         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
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
                if ( v19 == ++v21 )
                  goto LABEL_34;
              }
              if ( !Item )
                goto LABEL_37;
LABEL_28:
              spriteList = this->fields.mSpriteNames;
              if ( !spriteList )
                goto LABEL_37;
              klass = (Il2CppObject *)Item[1].klass;
              v29 = *((_QWORD *)spriteList + 2);
              v30 = Method_System_Collections_Generic_List_string__Add__;
              ++*((_DWORD *)spriteList + 7);
              if ( !v29 )
                goto LABEL_37;
              v31 = *((int *)spriteList + 6);
              if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)spriteList,
                  klass,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v32 = v29 + 8 * v31;
                *((_DWORD *)spriteList + 6) = v31 + 1;
                *(_QWORD *)(v32 + 32) = klass;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)klass, v23, v24, v25, v26, v27, v28);
              }
              goto LABEL_33;
            }
LABEL_34:
            spriteList = this->fields.mSpriteNames;
            if ( spriteList )
            {
              System_Collections_Generic_List_object___Sort(
                (System_Collections_Generic_List_object__o *)spriteList,
                (const MethodInfo_38407E0 *)Method_System_Collections_Generic_List_string__Sort__);
              return;
            }
          }
        }
      }
LABEL_37:
      sub_1C7BD40(spriteList, klass);
    }
  }
}


void UISpriteAnimation__ResetToBeginning(UISpriteAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *mSpriteNames; // x0
  UISprite_o *v6; // x20

  if ( (byte_4CF2FA1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2FA1 = 1;
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
      v6 = this->fields.mSprite;
      mSpriteNames = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    mSpriteNames,
                                                                    this->fields.mIndex,
                                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !v6 )
        goto LABEL_13;
      UISprite__set_spriteName(v6, (System_String_o *)mSpriteNames, 0);
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
        sub_1C7BD40(mSpriteNames, v4);
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
  float v9; // s0
  _BOOL4 mLoop; // w8
  UISprite_o *mSprite; // x20

  v2 = this;
  if ( (byte_4CF2F9F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (UISpriteAnimation_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4CF2F9F = 1;
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
          this = (UISpriteAnimation_o *)v2->fields.mSpriteNames;
          v9 = v7 - v8;
          if ( v8 <= 0.0 )
            v9 = 0.0;
          method = (const MethodInfo *)(unsigned int)(v2->fields.mIndex + 1);
          v2->fields.mDelta = v9;
          v2->fields.mIndex = (int)method;
          if ( !this )
            goto LABEL_23;
          if ( (int)method >= SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            mLoop = v2->fields.mLoop;
            LODWORD(method) = 0;
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
                                            (int32_t)method,
                                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
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
              sub_1C7BD40(this, method);
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
  if ( (byte_4CF2F9E & 1) == 0 )
  {
    this = (UISpriteAnimation_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4CF2F9E = 1;
  }
  mSpriteNames = v2->fields.mSpriteNames;
  if ( !mSpriteNames )
    sub_1C7BD40(this, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  p_mPrefix = &this->fields.mPrefix;
  if ( System_String__op_Inequality(this->fields.mPrefix, value, 0) )
  {
    this->fields.mPrefix = value;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_mPrefix, (int32_t)value, v6, v7, v8, v9, v10, v11);
    UISpriteAnimation__RebuildSpriteList(this, v12);
  }
}