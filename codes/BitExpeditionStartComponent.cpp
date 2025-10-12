void BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4C31C95 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17202/*"bit_expedition_start_dog_{0}"*/);
    sub_1C32C20(&StringLiteral_17201/*"bit_expedition_start"*/);
    sub_1C32C20(&StringLiteral_17143/*"bg_{0}"*/);
    byte_4C31C95 = 1;
  }
  v3 = StringLiteral_17201/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17201/*"bit_expedition_start"*/;
  sub_1C32BC4(&this->fields.START_ANIMATION_NAME_BASE, v3);
  v4 = StringLiteral_17202/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17202/*"bit_expedition_start_dog_{0}"*/;
  sub_1C32BC4(&this->fields.DOG_ANIMATION_NAME_BASE, v4);
  v5 = StringLiteral_17143/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_17143/*"bg_{0}"*/;
  sub_1C32BC4(&this->fields.BG_IMAGE_NAME_BASE, v5);
  this->fields.WAIT_TOUCH_SKIP_TIME = 0.3;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *BitExpeditionStartComponent__AnimationPlaying(
        BitExpeditionStartComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v8; // x22

  if ( (byte_4C31C93 & 1) == 0 )
  {
    sub_1C32C20(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
    byte_4C31C93 = 1;
  }
  v8 = sub_1C32E6C(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 48) = this;
  sub_1C32BC4(v8 + 48, this);
  *(_QWORD *)(v8 + 32) = animation;
  sub_1C32BC4(v8 + 32, animation);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_1C32BC4(v8 + 40, callBack);
  return (System_Collections_IEnumerator_o *)v8;
}


void BitExpeditionStartComponent__SerializeFieldNotNullCheck(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  BitExpeditionStartComponent_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_4C31C94 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C31C94 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1C32E7C(this);
  size = dogList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


void BitExpeditionStartComponent__SetUp(
        BitExpeditionStartComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v11; // x23
  const MethodInfo *v12; // x1
  DataManager_o *Instance; // x0
  CommonConsumeEntity_o *Entity; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  int32_t eventId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  Il2CppObject *v26; // x0
  System_String_o *v27; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  System_Func_object__bool__o *v37; // x24
  Il2CppObject *v38; // x22
  UnityEngine_GameObject_o *v39; // x22
  UnityEngine_Transform_o *v40; // x23
  UnityEngine_Transform_o *v41; // x22
  System_String_o *v42; // x2
  const MethodInfo *v43; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v45; // x2
  System_Collections_IEnumerator_o *v46; // x0
  int32_t v47; // [xsp+8h] [xbp-68h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C31C91 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_1C32C20(&System_Func_GameObject__bool__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__);
    sub_1C32C20(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
    byte_4C31C91 = 1;
  }
  v11 = (Il2CppObject *)sub_1C32E6C(BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor(v11, 0);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !eventExpeditionEntity || !Instance )
    goto LABEL_24;
  Entity = CommonConsumeMaster__GetEntity(
             (CommonConsumeMaster_o *)Instance,
             eventExpeditionEntity->fields.commonConsumeId,
             1,
             0);
  if ( Entity )
  {
    itemSprite = this->fields.itemSprite;
    objectId = Entity->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(itemSprite, objectId, 0);
  }
  eventId = eventExpeditionEntity->fields.eventId;
  bgSprite = this->fields.bgSprite;
  BG_IMAGE_NAME_BASE = this->fields.BG_IMAGE_NAME_BASE;
  idx = eventExpeditionEntity->fields.idx;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx, v15, v16, v17, v18, v19, v20);
  v27 = System_String__Format(BG_IMAGE_NAME_BASE, v26, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40507600(eventId, bgSprite, v27, 0);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v47 = pieceIdx;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v29, v30, v31, v32, v33, v34);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v35, 0);
  if ( !v11 )
    goto LABEL_24;
  v11[1].klass = (Il2CppClass *)Instance;
  sub_1C32BC4(&v11[1], Instance);
  dogList = this->fields.dogList;
  v37 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
  System_Func_object__bool____ctor(v37, v11, Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, 0);
  v38 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                v38,
                                (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_24;
  v39 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !this->fields.dogRoot )
    goto LABEL_24;
  v40 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0);
  if ( !v40 )
    goto LABEL_24;
  UnityEngine_Transform__SetParent(v40, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v39, 0);
  v41 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C313D6 )
  {
    Instance = (DataManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v41
    || (UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (Instance = (DataManager_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Rewind_70968264(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0),
        (Instance = (DataManager_o *)this->fields.animation) == 0) )
  {
LABEL_24:
    sub_1C32E7C(Instance);
  }
  UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v42, callback, v43);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, started, 0);
  v46 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v45);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v46, 0);
}


void BitExpeditionStartComponent__SkipAnimation(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1C32E7C(0);
  UnityEngine_Animation__Stop(animation, 0);
}


System_Collections_IEnumerator_o *BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C31C92 & 1) == 0 )
  {
    sub_1C32C20(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
    byte_4C31C92 = 1;
  }
  v5 = sub_1C32E6C(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1C32BC4(v5 + 40, setTouchPanelMethod);
  return (System_Collections_IEnumerator_o *)v5;
}


void BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BitExpeditionStartComponent__AnimationPlaying_d__11__MoveNext(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C31C96 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    sub_1C32C20(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__);
    sub_1C32C20(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C31C96 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0);
    if ( !_4__this )
      goto LABEL_41;
    dogRoot = _4__this->fields.dogRoot;
    if ( !dogRoot )
      goto LABEL_41;
    dogRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dogRoot, 0);
    if ( !dogRoot )
      goto LABEL_41;
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          p_offset += 4;
          if ( !v15 )
            goto LABEL_15;
        }
        v17 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_15:
        v17 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
              Enumerator,
              *(_QWORD *)(v17 + 8))
          & 1) == 0 )
        break;
      v18 = Enumerator->klass;
      v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1];
      }
      else
      {
LABEL_22:
        v21 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                         Enumerator,
                                         *(_QWORD *)(v21 + 8));
      if ( !v22 )
        goto LABEL_40;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v22->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        v22 = (UnityEngine_Component_o *)sub_1C3313C(v22);
LABEL_40:
        sub_1C32E7C(v22);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
    }
    v25 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
    if ( v25 )
    {
      v26 = *(_QWORD *)v25;
      v27 = v25;
      v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_35;
        }
        v30 = v26 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_35:
        v30 = sub_1C83438(v25, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C32E6C(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor(v4, 0);
    if ( v4 )
    {
      animation = this->fields.animation;
      v4[1].klass = (Il2CppClass *)animation;
      sub_1C32BC4(&v4[1], animation);
      v7 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v7,
        v4,
        Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
        0);
      v8 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v8, v7, 0);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_1C32BC4(p__2__current, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1C32E7C(dogRoot);
  }
  return 0;
}


Il2CppObject *BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_IEnumerator_Reset(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_IEnumerator_get_Current(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BitExpeditionStartComponent__AnimationPlaying_d__11__System_IDisposable_Dispose(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BitExpeditionStartComponent__WaitTouchSkip_d__10__MoveNext(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  BitExpeditionStartComponent__WaitTouchSkip_d__10_o *v2; // x19
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v2 = this;
  if ( (byte_4C31C97 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C31C97 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v2->fields.setTouchPanelMethod;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C32E7C(this);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_1C32BC4(p__2__current, v6);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_IEnumerator_Reset(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_IEnumerator_get_Current(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BitExpeditionStartComponent__WaitTouchSkip_d__10__System_IDisposable_Dispose(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  ;
}


void BitExpeditionStartComponent___c__DisplayClass11_0___ctor(
        BitExpeditionStartComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BitExpeditionStartComponent___c__DisplayClass11_0___AnimationPlaying_b__0(
        BitExpeditionStartComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1C32E7C(0);
  return !UnityEngine_Animation__get_isPlaying(animation, 0);
}


void BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
        BitExpeditionStartComponent___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BitExpeditionStartComponent___c__DisplayClass9_0___SetUp_b__0(
        BitExpeditionStartComponent___c__DisplayClass9_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.name, 0);
}