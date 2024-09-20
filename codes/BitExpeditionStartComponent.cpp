void __fastcall BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EE49 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17231/*"bit_expedition_start_dog_{0}"*/);
    sub_1B885B0(&StringLiteral_17230/*"bit_expedition_start"*/);
    sub_1B885B0(&StringLiteral_17173/*"bg_{0}"*/);
    byte_4A5EE49 = 1;
  }
  v5 = StringLiteral_17230/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17230/*"bit_expedition_start"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.START_ANIMATION_NAME_BASE, v5, v2, v3);
  v6 = StringLiteral_17231/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17231/*"bit_expedition_start_dog_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v6, v7, v8);
  v9 = StringLiteral_17173/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_17173/*"bg_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.BG_IMAGE_NAME_BASE, v9, v10, v11);
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

  if ( (byte_4A5EE47 & 1) == 0 )
  {
    sub_1B885B0(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
    byte_4A5EE47 = 1;
  }
  v8 = sub_1B887FC(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 48) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)this, v9, v10);
  *(_QWORD *)(v8 + 32) = animation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)animation, v11, v12);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)callBack, v13, v14);
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
  if ( (byte_4A5EE48 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A5EE48 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1B8880C(this, method);
  size = dogList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


void __fastcall BitExpeditionStartComponent__SetUp(
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
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  System_Func_object__bool__o *v34; // x24
  Il2CppObject *v35; // x22
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_Transform_o *v37; // x23
  UnityEngine_Transform_o *v38; // x22
  System_String_o *v39; // x2
  const MethodInfo *v40; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v42; // x2
  System_Collections_IEnumerator_o *v43; // x0
  int32_t v44; // [xsp+8h] [xbp-68h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5EE45 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_1B885B0(&System_Func_GameObject__bool__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__);
    sub_1B885B0(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
    byte_4A5EE45 = 1;
  }
  v11 = sub_1B887FC(BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx, v16, v17, v18);
  v25 = System_String__Format(BG_IMAGE_NAME_BASE, v24, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, bgSprite, v25, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v44 = pieceIdx;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v27, v28, v29);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v30, 0LL);
  if ( !v11 )
    goto LABEL_24;
  *(_QWORD *)(v11 + 16) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Instance, v31, v32);
  dogList = this->fields.dogList;
  v34 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GameObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v11,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    0LL);
  v35 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                v35,
                                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_24;
  v36 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_24;
  v37 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v37 )
    goto LABEL_24;
  UnityEngine_Transform__SetParent(v37, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
  v38 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE6 )
  {
    Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v38
    || (UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_69203812(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL) )
  {
LABEL_24:
    sub_1B8880C(Instance, v14);
  }
  UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v39, callback, v40);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v43 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v42);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v43, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5EE46 & 1) == 0 )
  {
    sub_1B885B0(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
    byte_4A5EE46 = 1;
  }
  v5 = sub_1B887FC(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)setTouchPanelMethod, v8, v9);
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
  int32_t _1__state; // w8
  __int64 v4; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v10; // x21
  UnityEngine_WaitUntil_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  __int64 v18; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  UnityEngine_Component_o *v28; // x0
  __int64 v29; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x19
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( (byte_4A5EE4A & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    sub_1B885B0(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__);
    sub_1B885B0(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5EE4A = 1;
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
      sub_1B8880C(0LL, v18);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v21;
          p_offset += 4;
          if ( !v21 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v24 = Enumerator->klass;
      v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v26 = (System_Collections_IEnumerator_c **)&v24->_1.interfaceOffsets->offset;
        while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v25;
          v26 += 2;
          if ( !v25 )
            goto LABEL_22;
        }
        v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1].method;
      }
      else
      {
LABEL_22:
        v27 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v28 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(
                                         Enumerator,
                                         *(_QWORD *)(v27 + 8));
      if ( !v28 )
        goto LABEL_40;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B88ACC(v28);
LABEL_40:
        sub_1B8880C(v28, v29);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    }
    v32 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
    if ( v32 )
    {
      v33 = *(_QWORD *)v32;
      v34 = v32;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_35;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_35:
        v37 = sub_1BDA590(v32, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = sub_1B887FC(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    if ( v4 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v4 + 16) = animation;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)animation, v7, v8);
      v10 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v10,
        (Il2CppObject *)v4,
        Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
        0LL);
      v11 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v11, v10, 0LL);
      this->fields.__2__current = (Il2CppObject *)v11;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v11, v13, v14);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1B8880C(dogRoot, v6);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  BitExpeditionStartComponent__WaitTouchSkip_d__10_o *v2; // x19
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v2 = this;
  if ( (byte_4A5EE4B & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5EE4B = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v2->fields.setTouchPanelMethod;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B8880C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v6, v8, v9);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}