void BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C215C6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17198/*"bit_expedition_start_dog_{0}"*/);
    sub_1C2D490(&StringLiteral_17197/*"bit_expedition_start"*/);
    sub_1C2D490(&StringLiteral_17139/*"bg_{0}"*/);
    byte_4C215C6 = 1;
  }
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17197/*"bit_expedition_start"*/;
  sub_1C2D434(&this->fields.START_ANIMATION_NAME_BASE);
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17198/*"bit_expedition_start_dog_{0}"*/;
  sub_1C2D434(&this->fields.DOG_ANIMATION_NAME_BASE);
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_17139/*"bg_{0}"*/;
  sub_1C2D434(&this->fields.BG_IMAGE_NAME_BASE);
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

  if ( (byte_4C215C4 & 1) == 0 )
  {
    sub_1C2D490(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
    byte_4C215C4 = 1;
  }
  v8 = sub_1C2D6DC(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 48) = this;
  sub_1C2D434(v8 + 48);
  *(_QWORD *)(v8 + 32) = animation;
  sub_1C2D434(v8 + 32);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_1C2D434(v8 + 40);
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
  if ( (byte_4C215C5 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C215C5 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1C2D6EC(this, method);
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
  __int64 v14; // x1
  CommonConsumeEntity_o *Entity; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  int32_t eventId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  Il2CppObject *v24; // x0
  System_String_o *v25; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  System_Func_object__bool__o *v32; // x24
  Il2CppObject *v33; // x22
  UnityEngine_GameObject_o *v34; // x22
  UnityEngine_Transform_o *v35; // x23
  UnityEngine_Transform_o *v36; // x22
  System_String_o *v37; // x2
  const MethodInfo *v38; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v40; // x2
  System_Collections_IEnumerator_o *v41; // x0
  int32_t v42; // [xsp+8h] [xbp-68h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C215C2 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_1C2D490(&System_Func_GameObject__bool__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__);
    sub_1C2D490(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
    byte_4C215C2 = 1;
  }
  v11 = (Il2CppObject *)sub_1C2D6DC(BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor(v11, 0);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx, v16, v17, v18);
  v25 = System_String__Format(BG_IMAGE_NAME_BASE, v24, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40385372(eventId, bgSprite, v25, 0);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v42 = pieceIdx;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v27, v28, v29);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v30, 0);
  if ( !v11 )
    goto LABEL_24;
  v11[1].klass = (Il2CppClass *)Instance;
  sub_1C2D434(&v11[1]);
  dogList = this->fields.dogList;
  v32 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GameObject__bool__TypeInfo);
  System_Func_object__bool____ctor(v32, v11, Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, 0);
  v33 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                v33,
                                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_24;
  v34 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !this->fields.dogRoot )
    goto LABEL_24;
  v35 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0);
  if ( !v35 )
    goto LABEL_24;
  UnityEngine_Transform__SetParent(v35, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v34, 0);
  v36 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C20DA6 )
  {
    Instance = (DataManager_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v36
    || (UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (Instance = (DataManager_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Rewind_70908328(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0),
        (Instance = (DataManager_o *)this->fields.animation) == 0) )
  {
LABEL_24:
    sub_1C2D6EC(Instance, v14);
  }
  UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v37, callback, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, started, 0);
  v41 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v40);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v41, 0);
}


void BitExpeditionStartComponent__SkipAnimation(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1C2D6EC(0, method);
  UnityEngine_Animation__Stop(animation, 0);
}


System_Collections_IEnumerator_o *BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C215C3 & 1) == 0 )
  {
    sub_1C2D490(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
    byte_4C215C3 = 1;
  }
  v5 = sub_1C2D6DC(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434(v5 + 32);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1C2D434(v5 + 40);
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
  __int64 v6; // x1
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  __int64 v13; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_IEnumerator_c *v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x19
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C215C7 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Transform_TypeInfo);
    sub_1C2D490(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__);
    sub_1C2D490(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C215C7 = 1;
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
      sub_1C2D6EC(0, v13);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          p_offset += 4;
          if ( !v16 )
            goto LABEL_15;
        }
        v18 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_15:
        v18 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
              Enumerator,
              *(_QWORD *)(v18 + 8))
          & 1) == 0 )
        break;
      v19 = Enumerator->klass;
      v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 2;
          if ( !v20 )
            goto LABEL_22;
        }
        v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1];
      }
      else
      {
LABEL_22:
        v22 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v23 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                         Enumerator,
                                         *(_QWORD *)(v22 + 8));
      if ( !v23 )
        goto LABEL_40;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v23->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        v23 = (UnityEngine_Component_o *)sub_1C2D9AC(v23);
LABEL_40:
        sub_1C2D6EC(v23, v24);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
    }
    v27 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
    if ( v27 )
    {
      v28 = *(_QWORD *)v27;
      v29 = v27;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_35;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_35:
        v32 = sub_1C7DCA8(v27, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C2D6DC(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor(v4, 0);
    if ( v4 )
    {
      v4[1].klass = (Il2CppClass *)this->fields.animation;
      sub_1C2D434(&v4[1]);
      v7 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v7,
        v4,
        Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
        0);
      v8 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v8, v7, 0);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1C2D6EC(dogRoot, v6);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C215C8 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C215C8 = 1;
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
    sub_1C2D6EC(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_1C2D434(p__2__current);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, 0);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.name, 0);
}