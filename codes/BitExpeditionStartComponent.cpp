void BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596A59F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17943/*"bit_expedition_start_dog_{0}"*/);
    sub_2213A60(&StringLiteral_17942/*"bit_expedition_start"*/);
    sub_2213A60(&StringLiteral_17881/*"bg_{0}"*/);
    byte_596A59F = 1;
  }
  v9 = StringLiteral_17942/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17942/*"bit_expedition_start"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.START_ANIMATION_NAME_BASE, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17943/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17943/*"bit_expedition_start_dog_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_17881/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_17881/*"bg_{0}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.BG_IMAGE_NAME_BASE, v17, v18, v19, v20, v21, v22, v23);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596A59D & 1) == 0 )
  {
    sub_2213A60(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
    byte_596A59D = 1;
  }
  v8 = sub_2213CCC(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 48) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 48), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 32) = animation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)animation, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)callBack, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void BitExpeditionStartComponent__SerializeFieldNotNullCheck(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  BitExpeditionStartComponent_o *v2; // x19

  v2 = this;
  if ( (byte_596A59E & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_596A59E = 1;
  }
  if ( !v2->fields.dogList )
    sub_2213CDC(this, method);
}


void BitExpeditionStartComponent__SetUp(
        BitExpeditionStartComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x23
  const MethodInfo *v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  CommonConsumeEntity_o *Entity; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  System_String_o *BG_IMAGE_NAME_BASE; // x26
  int32_t idx; // w8
  int32_t eventId; // w25
  UISprite_o *bgSprite; // x24
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *v27; // x26
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  System_Func_object__bool__o *v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *v40; // x22
  UnityEngine_GameObject_o *v41; // x22
  UnityEngine_Transform_o *v42; // x23
  UnityEngine_Transform_o *v43; // x22
  System_String_o *v44; // x2
  const MethodInfo *v45; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v47; // x2
  System_Collections_IEnumerator_o *v48; // x0
  int32_t v49; // [xsp+8h] [xbp-58h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596A59B & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_2213A60(&System_Func_GameObject__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__);
    sub_2213A60(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
    byte_596A59B = 1;
  }
  v11 = sub_2213CCC(BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
    AtlasManager__SetItem(itemSprite, objectId, 0);
  }
  BG_IMAGE_NAME_BASE = this->fields.BG_IMAGE_NAME_BASE;
  eventId = eventExpeditionEntity->fields.eventId;
  idx = eventExpeditionEntity->fields.idx;
  bgSprite = this->fields.bgSprite;
  v50 = idx;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v50);
  v27 = System_String__Format(BG_IMAGE_NAME_BASE, v24, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25, v26);
  AtlasManager__SetEventUI_47569484(eventId, bgSprite, v27, 0);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v49 = pieceIdx;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v49);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v29, 0);
  if ( !v11 )
    goto LABEL_24;
  *(_QWORD *)(v11 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)Instance, v30, v31, v32, v33, v34, v35);
  dogList = this->fields.dogList;
  v37 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v37,
    (Il2CppObject *)v11,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    0);
  v40 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                v40,
                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_24;
  v41 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !this->fields.dogRoot )
    goto LABEL_24;
  v42 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0);
  if ( !v42 )
    goto LABEL_24;
  UnityEngine_Transform__SetParent(v42, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v41, 0);
  v43 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_5969AE5 )
  {
    Instance = (DataManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v43
    || (UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (Instance = (DataManager_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Rewind_83076568(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0),
        (Instance = (DataManager_o *)this->fields.animation) == 0) )
  {
LABEL_24:
    sub_2213CDC(Instance, v14);
  }
  UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v44, callback, v45);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
  v48 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v47);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v48, 0);
}


void BitExpeditionStartComponent__SkipAnimation(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_2213CDC(0, method);
  UnityEngine_Animation__Stop(animation, 0);
}


System_Collections_IEnumerator_o *BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596A59C & 1) == 0 )
  {
    sub_2213A60(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
    byte_596A59C = 1;
  }
  v5 = sub_2213CCC(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)setTouchPanelMethod, v12, v13, v14, v15, v16, v17);
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
  int32_t _1__state; // w22
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 naturalAligment; // x9
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *gameObject; // x19
  __int64 v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v34; // x21
  UnityEngine_WaitUntil_o *v35; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x20
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  System_Collections_IEnumerator_o *v50; // [xsp+28h] [xbp-38h]

  if ( (byte_596A5A0 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__);
    sub_2213A60(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596A5A0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v26 = sub_2213CCC(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0);
    if ( v26 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v26 + 16) = animation;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 16), (int32_t)animation, v27, v28, v29, v30, v31, v32);
      v34 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v34,
        (Il2CppObject *)v26,
        Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
        0);
      v35 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v35, v34, 0);
      this->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v35, v37, v38, v39, v40, v41, v42);
      *((_DWORD *)p__2__current - 2) = 1;
      return _1__state == 0;
    }
    goto LABEL_43;
  }
  if ( _1__state != 1 )
    return _1__state == 0;
  callBack = this->fields.callBack;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  ActionExtensions__Call(callBack, 0);
  if ( !_4__this
    || (dogRoot = _4__this->fields.dogRoot) == 0
    || (dogRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dogRoot, 0)) == 0 )
  {
LABEL_43:
    sub_2213CDC(dogRoot, v7);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0);
  v50 = Enumerator;
  while ( 1 )
  {
    if ( !v50 )
      goto LABEL_41;
    klass = v50->klass;
    v11 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_14;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v13 = sub_224BC3C(v50, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(v50, *(_QWORD *)(v13 + 8)) & 1) == 0 )
      break;
    v14 = v50->klass;
    v15 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_21;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1];
    }
    else
    {
LABEL_21:
      v17 = sub_224BC3C(v50, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       v50,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_2213CDC(0, v19);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v18->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_221405C(v18, UnityEngine_Transform_TypeInfo, v20, v21);
LABEL_41:
      sub_2213CDC(Enumerator, v9);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  v43 = sub_2213BB4(v50, System_IDisposable_TypeInfo);
  if ( v43 )
  {
    v44 = *(_QWORD *)v43;
    v45 = v43;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_36;
      }
      v48 = v44 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_36:
      v48 = sub_224BC3C(v43, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w21
  System_Action_o *setTouchPanelMethod; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v2 = this;
  if ( (byte_596A5A1 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596A5A1 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      setTouchPanelMethod = v2->fields.setTouchPanelMethod;
      v2->fields.__1__state = -1;
      ActionExtensions__Call(setTouchPanelMethod, 0);
    }
  }
  else
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_2213CDC(this, method);
    WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, WAIT_TOUCH_SKIP_TIME, 0);
    v2->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, 0);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.name, 0);
}