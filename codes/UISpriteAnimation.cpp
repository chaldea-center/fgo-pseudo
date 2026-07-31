void UISpriteAnimation___ctor(UISpriteAnimation_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  System_Collections_Generic_List_string__c *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593CFEC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CFEC = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.mFPS = 30;
  this->fields.mPrefix = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mPrefix, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = System_Collections_Generic_List_string__TypeInfo;
  *(_WORD *)&this->fields.mLoop = 257;
  this->fields.mActive = 1;
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mSpriteNames = (struct System_Collections_Generic_List_string__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteNames,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Collections_Generic_List_string__o *mSpriteNames; // x8
  int32_t size; // w2
  int v16; // w9
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *mAtlas; // x21
  int v19; // w23
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w21
  Il2CppObject *Item; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8

  if ( (byte_593CFEA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFEA = 1;
  }
  p_mSprite = &this->fields.mSprite;
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  spriteList = (void *)UnityEngine_Object__op_Equality(mSprite, 0, 0);
  if ( ((unsigned __int8)spriteList & 1) != 0 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    this->fields.mSprite = (struct UISprite_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, klass);
  spriteList = (void *)UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( ((unsigned __int8)spriteList & 1) != 0 )
  {
    if ( !*p_mSprite )
      goto LABEL_37;
    mAtlas = (UnityEngine_Object_o *)(*p_mSprite)->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, klass);
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
                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
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
              v29 = *((_QWORD *)spriteList + 2);
              klass = (Il2CppObject *)Item[1].klass;
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
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v32 = v29 + 8 * v31;
                *((_DWORD *)spriteList + 6) = v31 + 1;
                *(_QWORD *)(v32 + 32) = klass;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v32 + 32),
                  (int32_t)klass,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28);
              }
              goto LABEL_33;
            }
LABEL_34:
            spriteList = this->fields.mSpriteNames;
            if ( spriteList )
            {
              System_Collections_Generic_List_object___Sort(
                (System_Collections_Generic_List_object__o *)spriteList,
                (const MethodInfo_44514D4 *)Method_System_Collections_Generic_List_string__Sort__);
              return;
            }
          }
        }
      }
LABEL_37:
      sub_21FFECC(spriteList, klass);
    }
  }
}


void UISpriteAnimation__ResetToBeginning(UISpriteAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *mSprite; // x20
  int v5; // w9
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *mSpriteNames; // x0
  UISprite_o *v8; // x20

  if ( (byte_593CFEB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFEB = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  this->fields.mActive = 1;
  v5 = *(&v3->_2.cctor_finished + 1);
  this->fields.mIndex = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    mSpriteNames = (System_Collections_Generic_List_object__o *)this->fields.mSpriteNames;
    if ( !mSpriteNames )
      goto LABEL_13;
    if ( mSpriteNames->fields._size >= 1 )
    {
      v8 = this->fields.mSprite;
      mSpriteNames = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    mSpriteNames,
                                                                    this->fields.mIndex,
                                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !v8 )
        goto LABEL_13;
      UISprite__set_spriteName(v8, (System_String_o *)mSpriteNames, 0);
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
        sub_21FFECC(mSpriteNames, v6);
      }
    }
  }
}


void UISpriteAnimation__Update(UISpriteAnimation_o *this, const MethodInfo *method)
{
  UISpriteAnimation_o *v2; // x19
  struct System_Collections_Generic_List_string__o *mSpriteNames; // x8
  float mDelta; // s8
  float v5; // s0
  float mFPS; // s1
  float v7; // s1
  float v8; // s0
  _BOOL4 mLoop; // w8
  UISprite_o *mSprite; // x20

  v2 = this;
  if ( (byte_593CFE9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (UISpriteAnimation_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_593CFE9 = 1;
  }
  if ( v2->fields.mActive )
  {
    mSpriteNames = v2->fields.mSpriteNames;
    if ( !mSpriteNames )
      goto LABEL_23;
    if ( mSpriteNames->fields._size >= 2 )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
      if ( UnityEngine_Application__get_isPlaying(0) && v2->fields.mFPS >= 1 )
      {
        mDelta = v2->fields.mDelta;
        v5 = mDelta + RealTime__get_deltaTime(0);
        mFPS = (float)v2->fields.mFPS;
        v2->fields.mDelta = v5;
        v7 = 1.0 / mFPS;
        if ( v7 < v5 )
        {
          v8 = v5 - v7;
          this = (UISpriteAnimation_o *)v2->fields.mSpriteNames;
          method = (const MethodInfo *)(unsigned int)(v2->fields.mIndex + 1);
          v2->fields.mIndex = (int)method;
          if ( v7 <= 0.0 )
            v8 = 0.0;
          v2->fields.mDelta = v8;
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
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
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
              sub_21FFECC(this, method);
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
  if ( (byte_593CFE8 & 1) == 0 )
  {
    this = (UISpriteAnimation_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_593CFE8 = 1;
  }
  mSpriteNames = v2->fields.mSpriteNames;
  if ( !mSpriteNames )
    sub_21FFECC(this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  p_mPrefix = &this->fields.mPrefix;
  if ( System_String__op_Inequality(this->fields.mPrefix, value, 0) )
  {
    this->fields.mPrefix = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mPrefix, (int32_t)value, v6, v7, v8, v9, v10, v11);
    UISpriteAnimation__RebuildSpriteList(this, v12);
  }
}