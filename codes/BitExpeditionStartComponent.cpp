void __fastcall BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0005E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17163/*"bit_expedition_start_dog_{0}"*/, method);
    sub_1B640C8(&StringLiteral_17162/*"bit_expedition_start"*/, v5);
    sub_1B640C8(&StringLiteral_17105/*"bg_{0}"*/, v6);
    byte_4A0005E = 1;
  }
  v7 = StringLiteral_17162/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17162/*"bit_expedition_start"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.START_ANIMATION_NAME_BASE, v7, v2, v3);
  v8 = StringLiteral_17163/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17163/*"bit_expedition_start_dog_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v8, v9, v10);
  v11 = StringLiteral_17105/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_17105/*"bg_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BG_IMAGE_NAME_BASE, v11, v12, v13);
  this->fields.WAIT_TOUCH_SKIP_TIME = 0.3;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__AnimationPlaying(
        BitExpeditionStartComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A0005C & 1) == 0 )
  {
    sub_1B640C8(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation);
    byte_4A0005C = 1;
  }
  v8 = sub_1B64314(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation, animationName);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 48) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)this, v9, v10);
  *(_QWORD *)(v8 + 32) = animation;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)animation, v11, v12);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)callBack, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BitExpeditionStartComponent__SerializeFieldNotNullCheck(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  BitExpeditionStartComponent_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_4A0005D & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                              method);
    byte_4A0005D = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1B64324(this);
  size = dogList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BitExpeditionStartComponent__SetUp(
        BitExpeditionStartComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x23
  const MethodInfo *v21; // x1
  DataManager_o *Instance; // x0
  CommonConsumeEntity_o *Entity; // x0
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  int32_t eventId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  Il2CppObject *v29; // x0
  System_String_o *v30; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_object__bool__o *v38; // x24
  Il2CppObject *v39; // x22
  UnityEngine_GameObject_o *v40; // x22
  UnityEngine_Transform_o *v41; // x23
  __int64 v42; // x1
  UnityEngine_Transform_o *v43; // x22
  System_String_o *v44; // x2
  const MethodInfo *v45; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v47; // x2
  System_Collections_IEnumerator_o *v48; // x0
  int32_t v49; // [xsp+8h] [xbp-68h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A0005A & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, eventExpeditionEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v12);
    sub_1B640C8(&System_Func_GameObject__bool__TypeInfo, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, v18);
    sub_1B640C8(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo, v19);
    byte_4A0005A = 1;
  }
  v20 = sub_1B64314(
          BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo,
          eventExpeditionEntity,
          *(_QWORD *)&pieceIdx);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !eventExpeditionEntity || !Instance )
    goto LABEL_24;
  Entity = CommonConsumeMaster__GetEntity(
             (CommonConsumeMaster_o *)Instance,
             eventExpeditionEntity->fields.commonConsumeId,
             1,
             0LL);
  if ( Entity )
  {
    itemSprite = this->fields.itemSprite;
    objectId = Entity->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(itemSprite, objectId, 0LL);
  }
  eventId = eventExpeditionEntity->fields.eventId;
  bgSprite = this->fields.bgSprite;
  BG_IMAGE_NAME_BASE = this->fields.BG_IMAGE_NAME_BASE;
  idx = eventExpeditionEntity->fields.idx;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v30 = System_String__Format(BG_IMAGE_NAME_BASE, v29, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(eventId, bgSprite, v30, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v49 = pieceIdx;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v32, 0LL);
  if ( !v20 )
    goto LABEL_24;
  *(_QWORD *)(v20 + 16) = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)Instance, v33, v34);
  dogList = this->fields.dogList;
  v38 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GameObject__bool__TypeInfo, v36, v37);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v20,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    0LL);
  v39 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                v39,
                                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_24;
  v40 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_24;
  v41 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v41 )
    goto LABEL_24;
  UnityEngine_Transform__SetParent(v41, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v40, 0LL);
  v43 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_49F7116 )
  {
    Instance = (DataManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v42);
    byte_49F7116 = 1;
  }
  if ( !v43
    || (UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_68872168(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL) )
  {
LABEL_24:
    sub_1B64324(Instance);
  }
  UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v44, callback, v45);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v48 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v47);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v48, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1B64324(0LL);
  UnityEngine_Animation__Stop(animation, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0005B & 1) == 0 )
  {
    sub_1B640C8(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod);
    byte_4A0005B = 1;
  }
  v5 = sub_1B64314(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)setTouchPanelMethod, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__MoveNext(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  __int64 v12; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_Animation_o *animation; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_bool__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_WaitUntil_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v34; // x8
  __int64 v35; // x9
  System_Collections_IEnumerator_c **v36; // x10
  __int64 v37; // x0
  UnityEngine_Component_o *v38; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x19
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4A0005F & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v7);
    sub_1B640C8(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__, v8);
    sub_1B640C8(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v10);
    byte_4A0005F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0LL);
    if ( !_4__this )
      goto LABEL_41;
    dogRoot = _4__this->fields.dogRoot;
    if ( !dogRoot )
      goto LABEL_41;
    dogRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dogRoot, 0LL);
    if ( !dogRoot )
      goto LABEL_41;
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0LL);
    if ( !Enumerator )
      sub_1B64324(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v31;
          p_offset += 4;
          if ( !v31 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v34 = Enumerator->klass;
      v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v36 = (System_Collections_IEnumerator_c **)&v34->_1.interfaceOffsets->offset;
        while ( *(v36 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v35;
          v36 += 2;
          if ( !v35 )
            goto LABEL_22;
        }
        v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 1].method;
      }
      else
      {
LABEL_22:
        v37 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v38 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v37)(
                                         Enumerator,
                                         *(_QWORD *)(v37 + 8));
      if ( !v38 )
        goto LABEL_40;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v38->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v38->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B645E4(v38);
LABEL_40:
        sub_1B64324(v38);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v38, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    }
    v41 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
    if ( v41 )
    {
      v42 = *(_QWORD *)v41;
      v43 = v41;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_35;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_35:
        v46 = sub_1BB60A8(v41, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = sub_1B64314(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( v12 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v12 + 16) = animation;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)animation, v14, v15);
      v19 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v17, v18);
      System_Func_bool____ctor(
        v19,
        (Il2CppObject *)v12,
        Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
        0LL);
      v22 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v20, v21);
      UnityEngine_WaitUntil___ctor(v22, v19, 0LL);
      this->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = &this->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v22, v24, v25);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1B64324(dogRoot);
  }
  return 0;
}


Il2CppObject *__fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_IEnumerator_Reset(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_IEnumerator_get_Current(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__System_IDisposable_Dispose(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__MoveNext(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BitExpeditionStartComponent__WaitTouchSkip_d__10_o *v3; // x19
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v3 = this;
  if ( (byte_4A00060 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_1B640C8(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method);
    byte_4A00060 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v3->fields.setTouchPanelMethod;
    v3->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B64324(this);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v7 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
  UnityEngine_WaitForSeconds___ctor(v7, WAIT_TOUCH_SKIP_TIME, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v7, v9, v10);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_IEnumerator_Reset(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_IEnumerator_get_Current(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__System_IDisposable_Dispose(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BitExpeditionStartComponent___c__DisplayClass11_0___ctor(
        BitExpeditionStartComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BitExpeditionStartComponent___c__DisplayClass11_0___AnimationPlaying_b__0(
        BitExpeditionStartComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1B64324(0LL);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}


void __fastcall BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
        BitExpeditionStartComponent___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BitExpeditionStartComponent___c__DisplayClass9_0___SetUp_b__0(
        BitExpeditionStartComponent___c__DisplayClass9_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1B64324(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}